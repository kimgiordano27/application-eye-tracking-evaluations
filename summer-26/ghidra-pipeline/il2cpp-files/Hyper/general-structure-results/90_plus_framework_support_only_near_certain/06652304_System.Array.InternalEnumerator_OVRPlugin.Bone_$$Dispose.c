/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 06652304
PROGRAM: Hyper-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066525d4) */

void System_Array_InternalEnumerator<OVRPlugin_Bone>__Dispose(int param_1)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar9;
  
  if (in_NG == in_OV) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    uVar5 = FUN_04947fd0(lVar2,param_1 + -1);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  }
  else {
    uVar5 = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
  }
  thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar5);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34(lVar2);
  }
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_066523e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_04980e68();
LAB_066523e0:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_0ac09ba8;
  if (plVar4 != (long *)0x0) {
    iVar9 = 0;
    do {
      lVar2 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0665245c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar4,*(long *)puVar1,0);
LAB_0665245c:
      uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 == 0) goto LAB_06652580;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_06652568;
      }
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04980b34(lVar2);
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_066524f0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar4,lVar2,0);
LAB_066524f0:
      uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      puVar3 = (undefined8 *)(unaff_x20 + 8);
      if (iVar9 != 0) {
        lVar2 = *(long *)(unaff_x20 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(uint *)(lVar2 + 0x18) <= iVar9 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        puVar3 = (undefined8 *)(lVar2 + (long)(int)(iVar9 - 1U) * 8 + 0x20);
      }
      iVar9 = iVar9 + 1;
      *puVar3 = uVar5;
    } while (plVar4 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06652568:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0665259c;
    }
  }
LAB_06652580:
  puVar3 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac09b90,0);
LAB_0665259c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


