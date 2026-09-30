/*
FUNCTION_NAME: FUN_03beb798
ENTRY_POINT: 03beb798
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_03beb798(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__;
  if ((DAT_04839a44 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Globalization_Calendar_TimeToTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(StringLiteral_13990);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusOutEvent>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_13991);
    thunk_FUN_01efb3a4(StringLiteral_13992);
    DAT_04839a44 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar3 = FUN_03be91ac(param_3);
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((uVar3 & 1) == 0) {
    return *(undefined8 *)StringLiteral_13991;
  }
  plVar4 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,6);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar7);
  }
  local_24 = UnityEngine_Experimental_Rendering_RenderGraphModule_TextureDesc___ctor(param_3);
  lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_24);
  if (plVar4 == (long *)0x0) {
LAB_03bebac8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar7 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
  goto LAB_03bebabc;
  if ((int)plVar4[3] == 0) goto LAB_03bebab8;
  plVar4[4] = lVar7;
  thunk_FUN_01f51358(plVar4 + 4,lVar7);
  if (*param_3 == 0) goto LAB_03bebac8;
  local_28 = *(undefined4 *)(*param_3 + 0x18);
  lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_28);
  if ((lVar7 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
LAB_03bebabc:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (1 < *(uint *)(plVar4 + 3)) {
    plVar4[5] = lVar7;
    thunk_FUN_01f51358(plVar4 + 5,lVar7);
    local_34 = FUN_03bea2a8(param_3);
    lVar7 = thunk_FUN_01f113fc(*(undefined8 *)StringLiteral_13990,&local_34);
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
    goto LAB_03bebabc;
    if (2 < *(uint *)(plVar4 + 3)) {
      plVar4[6] = lVar7;
      thunk_FUN_01f51358(plVar4 + 6,lVar7);
      local_40 = FUN_03be9354(param_3);
      puVar2 = Method_Unity_Collections_NativeArray<float4>_Dispose__;
      uStack_3c = param_2;
      lVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<float4>_Dispose__,&local_40);
      if ((lVar7 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
      goto LAB_03bebabc;
      if (3 < *(uint *)(plVar4 + 3)) {
        plVar4[7] = lVar7;
        thunk_FUN_01f51358(plVar4 + 7,lVar7);
        local_48 = FUN_03bea6fc(param_3);
        uStack_44 = param_2;
        lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_48);
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
        goto LAB_03bebabc;
        if (4 < *(uint *)(plVar4 + 3)) {
          plVar4[8] = lVar7;
          thunk_FUN_01f51358(plVar4 + 8,lVar7);
          local_50 = FUN_03bea5f8(param_3);
          lVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_System_Globalization_Calendar_TimeToTicks__,&local_50);
          if ((lVar7 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
          goto LAB_03bebabc;
          if (5 < *(uint *)(plVar4 + 3)) {
            plVar4[9] = lVar7;
            thunk_FUN_01f51358(plVar4 + 9,lVar7);
            uVar6 = FUN_0340f378(*(undefined8 *)StringLiteral_13992,plVar4,0);
            return uVar6;
          }
        }
      }
    }
  }
LAB_03bebab8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


