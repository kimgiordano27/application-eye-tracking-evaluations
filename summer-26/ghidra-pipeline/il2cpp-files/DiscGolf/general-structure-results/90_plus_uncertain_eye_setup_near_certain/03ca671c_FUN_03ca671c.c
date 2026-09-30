/*
FUNCTION_NAME: FUN_03ca671c
ENTRY_POINT: 03ca671c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03ca6a78) */

void FUN_03ca671c(int *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_06db5f8f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    DAT_06db5f8f = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  iVar2 = FUN_0360026c(param_2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x20));
  *param_1 = iVar2;
  if (iVar2 < 2) {
    uVar6 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02dcfd18();
    }
    uVar6 = FUN_02d966a4(lVar3,iVar2 + -1);
    *(undefined8 *)(param_1 + 6) = uVar6;
  }
  LeanTween__value(param_1 + 6,uVar6);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *(long *)(param_3 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02dcfd18(lVar3);
  }
  lVar7 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02dd004c(param_2,lVar3,0);
System_Array_InternalEnumerator<OVRPlugin_Vector4f>__Dispose:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar1 = PTR_DAT_069fbff8;
  if (plVar5 != (long *)0x0) {
    iVar2 = 0;
    do {
      lVar3 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03ca68ec;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)puVar1,0);
LAB_03ca68ec:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar3 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar9 == 0) goto System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor;
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_03ca6a10;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = *(long *)(param_3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02dcfd18(lVar3);
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03ca6980;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02dd004c(plVar5,lVar3,0);
LAB_03ca6980:
      auVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (iVar2 == 0) {
        *(undefined1 (*) [16])(param_1 + 2) = auVar11;
        LeanTween__value(param_1 + 2,0);
      }
      else {
        lVar3 = *(long *)(param_1 + 6);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar3 + 0x18) <= iVar2 - 1U) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        pauVar8 = (undefined1 (*) [16])(lVar3 + (long)(int)(iVar2 - 1U) * 0x10 + 0x20);
        *pauVar8 = auVar11;
        LeanTween__value(pauVar8,0);
      }
      iVar2 = iVar2 + 1;
    } while (plVar5 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03ca6a10:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03ca6a44;
    }
  }
System_Array_InternalEnumerator<OVRPlugin_Vector4s>___ctor:
  puVar4 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)PTR_DAT_069fbff0,0);
LAB_03ca6a44:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


