/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetBool$$Invoke
ENTRY_POINT: 037142ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void OVR_OpenVR_IVRSettings__GetBool__Invoke(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  ulong uVar10;
  uint unaff_w22;
  long lVar11;
  long *unaff_x25;
  
  FUN_030f23f0(param_1,unaff_w22);
  plVar9 = (long *)(unaff_x20 + 0x10);
  *plVar9 = param_1;
  thunk_FUN_01f51358(plVar9,param_1);
  puVar3 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__2__;
  puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass48_0_<RequestFileExists>b__1__;
  if (0 < (int)unaff_w22) {
    uVar10 = 0;
    do {
      lVar11 = *plVar9;
      FUN_035c41f0(uVar10,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*unaff_x25);
      }
      uVar4 = FUN_036f0418();
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
      FUN_03714128(uVar5,uVar4);
      if (lVar11 == 0) {
LAB_03714404:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar7 = *(long *)(lVar11 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_03714404;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *puVar6 = uVar5;
        thunk_FUN_01f51358(puVar6,uVar5);
      }
      else {
        FUN_030f2bb4(lVar11,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70))
        ;
      }
      uVar10 = uVar10 + 1;
    } while (unaff_w22 != uVar10);
  }
  return;
}


