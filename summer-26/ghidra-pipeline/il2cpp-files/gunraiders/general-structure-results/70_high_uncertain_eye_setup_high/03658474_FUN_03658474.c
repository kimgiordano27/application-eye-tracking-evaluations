/*
FUNCTION_NAME: FUN_03658474
ENTRY_POINT: 03658474
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0365867c) */
/* WARNING: Removing unreachable block (ram,0x036585cc) */
/* WARNING: Removing unreachable block (ram,0x03658688) */
/* WARNING: Removing unreachable block (ram,0x03658638) */
/* WARNING: Removing unreachable block (ram,0x03658644) */
/* WARNING: Removing unreachable block (ram,0x03658650) */

undefined4 FUN_03658474(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  int *piVar10;
  
  puVar1 = Method_UnityEngine_Component_GetComponent<OVRManager>__;
  if ((DAT_045383a9 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(Method_UnityEngine_Component_GetComponent<OVRManager>__);
    FUN_01c5d288(Method_UnityEngine_Component_GetComponent<OVRMesh>__);
    DAT_045383a9 = 1;
  }
  plVar2 = (long *)thunk_FUN_01c496e0(*(undefined8 *)puVar1);
  FUN_03658898(plVar2,param_2,0);
  puVar1 = PTR_DAT_0422fce8;
  plVar3 = (long *)thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_UnityEngine_Component_GetComponent<OVRMesh>__);
  FUN_0397c2ec(plVar3,plVar2,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar4 = FUN_0397c35c(plVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar4 = FUN_0397cb48(lVar4,0,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  uVar5 = FUN_03657a94(param_1,uVar7,plVar3);
  uVar8 = 0;
  if ((uVar5 & 1) == 0) {
    uVar8 = 8;
  }
  lVar9 = *plVar3;
  lVar4 = *(long *)puVar1;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar4) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_036585b4;
      }
      uVar5 = uVar5 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_01c72498(plVar3,lVar4,0);
LAB_036585b4:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
  if (plVar2 != (long *)0x0) {
    lVar9 = *plVar2;
    lVar4 = *(long *)puVar1;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03658624;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar2,lVar4,0);
LAB_03658624:
    (*(code *)*puVar6)(plVar2,puVar6[1]);
  }
  return uVar8;
}


