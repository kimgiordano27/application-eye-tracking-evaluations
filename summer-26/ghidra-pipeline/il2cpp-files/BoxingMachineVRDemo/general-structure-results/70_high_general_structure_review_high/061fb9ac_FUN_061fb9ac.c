/*
FUNCTION_NAME: FUN_061fb9ac
ENTRY_POINT: 061fb9ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_061fb9ac(ulong *param_1,undefined4 param_2)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_06b8b3e9 & 1) == 0) {
    FUN_02d6084c(Method_System_Text_UTF8Encoding_GetBytes__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelIsFlatChanged__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__);
    DAT_06b8b3e9 = 1;
  }
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  uVar2 = *param_1;
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)FUN_05052634();
      plVar3 = (long *)*plVar3;
    }
    else {
      plVar3 = (long *)thunk_FUN_02d62344(uVar2,0);
    }
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelIsFlatChanged__ +
                       0x130);
      if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelIsFlatChanged__)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88();
      }
      lVar4 = FUN_03aac1c4(plVar3,param_2,*(undefined8 *)Method_System_Text_UTF8Encoding_GetBytes__)
      ;
      if (((lVar4 != 0) && (lVar7 = *(long *)(lVar4 + 0x10), lVar7 != 0)) &&
         (*(long *)(lVar7 + 0x4b8) != 0)) {
        UnityEngine_UIElements_PointerCancelEvent__PostDispatch();
        if ((*(long *)(lVar7 + 0x4b8) != 0) &&
           (lVar5 = FUN_06163668(*(long *)(lVar7 + 0x4b8),0), lVar5 != 0)) {
          uVar8 = *(undefined8 *)(lVar5 + 0x58);
          local_28 = 0;
          local_40 = 0;
          local_38 = 0;
          local_48 = 0;
          uVar2 = param_1[1];
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_UIR_UIRenderDevice_OnFlushPendingResources__ +
                      0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_061fa060(uVar8,uVar2,lVar7,&local_28,&local_38,&local_40,&local_48);
          *(undefined8 *)(lVar4 + 0x20) = local_28;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar4 + 0x30) = local_38;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar4 + 0x38) = local_40;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar4 + 0x28) = local_48;
          thunk_FUN_02dd37b4((undefined8 *)(lVar4 + 0x28));
          if ((*(long *)(lVar7 + 0x4b8) != 0) && (*(long *)(*(long *)(lVar7 + 0x4b8) + 0xd8) != 0))
          {
            FUN_061f4cb0();
            if ((*(long *)(lVar7 + 0x4b8) != 0) && (*(long *)(*(long *)(lVar7 + 0x4b8) + 0xd8) != 0)
               ) {
              FUN_061f4d9c();
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
  uVar8 = thunk_FUN_02d9d534();
  uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067746b0);
  FUN_05007004(uVar8,uVar6,0);
  uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067746b8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar8,uVar6);
}


