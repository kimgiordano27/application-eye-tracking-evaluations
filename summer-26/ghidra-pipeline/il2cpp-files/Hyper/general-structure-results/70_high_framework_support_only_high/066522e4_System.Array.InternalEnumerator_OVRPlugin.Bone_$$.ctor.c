/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$.ctor
ENTRY_POINT: 066522e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066525d4) */

void System_Array_InternalEnumerator<OVRPlugin_Bone>___ctor(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  long unaff_x19;
  int *unaff_x20;
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04980b34();
  }
  iVar2 = FUN_05b656d8();
  *unaff_x20 = iVar2;
  if (iVar2 < 2) {
    uVar6 = 0;
    unaff_x20[4] = 0;
    unaff_x20[5] = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04980b34();
    }
    uVar6 = FUN_04947fd0(lVar3,iVar2 + -1);
    *(undefined8 *)(unaff_x20 + 4) = uVar6;
  }
  thunk_FUN_049ee3d8(unaff_x20 + 4,uVar6);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_04980b34(lVar3);
  }
  lVar7 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_066523e0;
      }
      uVar9 = uVar9 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68();
LAB_066523e0:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar1 = PTR_DAT_0ac09ba8;
  if (plVar5 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0665245c;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar5,*(long *)puVar1,0);
LAB_0665245c:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 == 0) goto LAB_06652580;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_06652568;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04980b34();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_04980b34(lVar3);
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_066524f0;
          }
          uVar9 = uVar9 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar5,lVar3,0);
LAB_066524f0:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      piVar8 = unaff_x20 + 2;
      if (iVar2 != 0) {
        lVar3 = *(long *)(unaff_x20 + 4);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (*(uint *)(lVar3 + 0x18) <= iVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        piVar8 = (int *)(lVar3 + (long)(int)(iVar2 - 1U) * 8 + 0x20);
      }
      iVar2 = iVar2 + 1;
      *(undefined8 *)piVar8 = uVar6;
    } while (plVar5 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar8 = piVar8 + 4;
    if (uVar9 == 0) break;
LAB_06652568:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0665259c;
    }
  }
LAB_06652580:
  puVar4 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac09b90,0);
LAB_0665259c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


