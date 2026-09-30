/*
FUNCTION_NAME: FUN_038ecfac
ENTRY_POINT: 038ecfac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_9
*/


long FUN_038ecfac(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  
  puVar3 = PTR_DAT_03daa840;
  if ((DAT_03ff9920 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03daa840);
    thunk_FUN_01ad9084(PTR_DAT_03daa848);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03ff9920 = 1;
  }
  puVar2 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__;
  if (*(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) == 0) {
    lVar6 = FUN_01b47fd0(*(undefined8 *)
                          Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                         ,0);
    return lVar6;
  }
  lVar6 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03daa848);
  FUN_03081994(lVar6,0);
  if (lVar6 != 0) {
    plVar8 = (long *)(lVar6 + 0x10);
    *plVar8 = **(long **)(*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__ +
                         0xb8);
    thunk_FUN_01b4f09c(plVar8);
    lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
    if (lVar7 != 0) {
      (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),lVar6,*(undefined8 *)(lVar7 + 0x28))
      ;
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 == 0) {
        *plVar8 = *(long *)
                   Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__;
        thunk_FUN_01b4f09c(plVar8);
        lVar7 = *plVar8;
        if (lVar7 == 0) goto LAB_038ed1bc;
      }
      if (*(long *)(lVar6 + 0x18) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(*(long *)(lVar6 + 0x18) + 0x18);
      }
      lVar7 = FUN_01b47fd0(*(undefined8 *)puVar2,*(int *)(lVar7 + 0x10) * 2 + iVar9 + 0xc);
      if (*plVar8 != 0) {
        uVar4 = FUN_038ed1c0(lVar7,0,*(undefined4 *)(*plVar8 + 0x10));
        uVar4 = FUN_038ed24c(lVar7,uVar4,*(undefined8 *)(lVar6 + 0x10));
        iVar5 = FUN_038ed1c0(lVar7,uVar4,iVar9);
        lVar6 = *(long *)(lVar6 + 0x18);
        if (lVar6 == 0) {
          lVar1 = 0;
        }
        else {
          lVar1 = 0;
          if (*(int *)(lVar6 + 0x18) != 0) {
            lVar1 = lVar6 + 0x20;
          }
        }
        if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
          lVar6 = 0;
        }
        else {
          lVar6 = lVar7 + 0x20;
        }
        if (DAT_03ff9950 == (code *)0x0) {
          DAT_03ff9950 = (code *)FUN_01b47f04(
                                             "Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)"
                                             );
        }
        (*DAT_03ff9950)(lVar6 + iVar5,lVar1,(long)iVar9);
        return lVar7;
      }
    }
  }
LAB_038ed1bc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


