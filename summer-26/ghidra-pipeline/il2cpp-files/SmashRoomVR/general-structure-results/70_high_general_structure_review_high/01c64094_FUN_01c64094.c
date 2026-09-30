/*
FUNCTION_NAME: FUN_01c64094
ENTRY_POINT: 01c64094
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_3
*/


void FUN_01c64094(undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_03fed6c5 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_195);
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_43618BFFFF91993B7ACFDDCE7F5DC0AA6E9246C922F5F6B84F7DA8095FB5F961
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456
                      );
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c6403c with catch @ 01c640ec
                        */
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    DAT_03fed6c5 = 1;
  }
  FUN_01c644b4(param_4);
  FUN_01c6466c(param_4);
  if ((param_4[0x1e] != 0) && (param_4[0x1d] != 0)) {
                    /* try { // try from 01c6413c to 01d6413f has its CatchHandler @ 01c64140 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c6413c with catch @ 01c64140
                        */
    FUN_038ea5f0(*(undefined4 *)(param_4[0x1e] + 0x20),param_4[0x1d],0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 01c64144 to 01d64147 has its CatchHandler @ 01c64150 */
                    /* try { // try from 01c64148 to 01d64153 has its CatchHandler @ 01c63fdc */
    if (param_4[0x1a] != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c64144 with catch @ 01c64150
                        */
      if (*(char *)(param_4[0x1a] + 0x20) == '\0') {
        if (*(char *)((long)param_4 + 0xcc) != '\0') {
          FUN_01c647bc(param_4);
        }
        FUN_01c648dc(param_4);
        return;
      }
                    /* try { // try from 01c6415c to 01d641bb has its CatchHandler @ 01c6415c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c6415c with catch @ 01c6415c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c641f4 with catch @ 01c6415c
                       catch(type#1 @ 00000000) { ... } // from try @ 01c642c8 with catch @ 01c6415c
                        */
      lVar6 = param_4[0x10];
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      bVar2 = FUN_0391f968(lVar6,0,0);
      *(byte *)((long)param_4 + 0xcc) = bVar2 & 1;
      uVar3 = FUN_01c6498c(param_4);
      if ((uVar3 & 1) != 0) {
        lVar6 = param_4[0xb];
        uVar7 = *(undefined8 *)
                 Field_<PrivateImplementationDetails>_5DF6E0E2761359D30A8275058E299FCC0381534545F55CF43E41983F5D4C9456
        ;
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
                    /* try { // try from 01c641bc to 01d641f3 has its CatchHandler @ 01c6426c */
        uVar7 = FUN_0304eec0(uVar7,0);
        uVar7 = FUN_0391a670(lVar6,uVar7,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
                    /* try { // try from 01c641f4 to 01d642bb has its CatchHandler @ 01c6415c */
        plVar4 = (long *)FUN_03923714(uVar7,0);
        if ((plVar4 == (long *)0x0) ||
           (*plVar4 != *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__))
        goto LAB_01c644b0;
        lVar6 = FUN_01ed712c(plVar4,*(undefined8 *)
                                     Method_Unity_VisualScripting_TypeUtility_<>c__DisplayClass8_0_<Instantiator>b__1__
                            );
        if ((param_4[0x1e] == 0) || (lVar6 == 0)) goto LAB_01c644b0;
        FUN_038ea5f0(*(undefined4 *)(param_4[0x1e] + 0x20),lVar6,0);
        lVar6 = FUN_0391fab4(plVar4,0);
        if (((param_4[0xd] == 0) || (lVar5 = FUN_0391c27c(param_4[0xd],0), lVar5 == 0)) ||
           (FUN_03928d34(lVar5,0), lVar6 == 0)) goto LAB_01c644b0;
        FUN_03928dd4(lVar6,0);
        lVar6 = FUN_0391fab4(plVar4,0);
        uVar7 = FUN_01c64a14(param_4);
        if (lVar6 == 0) goto LAB_01c644b0;
        FUN_0392a01c(lVar6,uVar7,0);
        lVar6 = FUN_01ed712c(plVar4,*(undefined8 *)
                                     Field_<PrivateImplementationDetails>_43618BFFFF91993B7ACFDDCE7F5DC0AA6E9246C922F5F6B84F7DA8095FB5F961
                            );
        if (lVar6 == 0) goto LAB_01c644b0;
        *(undefined1 *)(lVar6 + 0x104) = 0;
        *(undefined4 *)(lVar6 + 0x48) = 1;
        uVar7 = FUN_01ed712c(plVar4,*(undefined8 *)StringLiteral_195);
        FUN_01c63798(param_4,uVar7);
      }
      lVar6 = param_4[0x10];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar6,0,0);
      if ((uVar3 & 1) != 0) {
        FUN_01c648dc(param_4);
      }
      lVar6 = param_4[0x12];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(lVar6,0,0);
      fVar8 = 0.0;
      if ((uVar3 & 1) == 0) {
LAB_01c643fc:
        *(float *)(param_4 + 0x15) = fVar8;
        if (*(char *)((long)param_4 + 0xcc) != '\0') {
          FUN_01c64b00(param_4);
          (**(code **)(*param_4 + 0x2e8))(param_4,*(undefined8 *)(*param_4 + 0x2f0));
          FUN_01c64d30(param_4);
          FUN_01c6466c(param_4);
          fVar8 = (float)FUN_01c64d84(param_4);
          if (fVar8 <= DAT_00b555e0) {
            FUN_01c647bc(param_4);
          }
        }
                    /* WARNING: Could not recover jumptable at 0x01c6447c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_4 + 0x2f8))(param_4,*(undefined8 *)(*param_4 + 0x300));
        return;
      }
      lVar6 = FUN_0391c27c(param_4,0);
      if (lVar6 != 0) {
        fVar8 = (float)FUN_03928d34(lVar6,0);
        if ((param_4[0x12] != 0) &&
           (fVar10 = param_2, fVar11 = param_3, lVar6 = FUN_0391c27c(param_4[0x12],0), lVar6 != 0))
        {
          fVar9 = (float)FUN_03928d34(lVar6,0);
          if (DAT_03fed25e == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25e = '\x01';
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar8 = SQRT((param_3 - fVar11) * (param_3 - fVar11) +
                       (fVar8 - fVar9) * (fVar8 - fVar9) + (param_2 - fVar10) * (param_2 - fVar10));
          goto LAB_01c643fc;
        }
      }
    }
  }
LAB_01c644b0:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


