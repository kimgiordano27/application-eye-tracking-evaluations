/*
FUNCTION_NAME: FUN_04218ea8
ENTRY_POINT: 04218ea8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void FUN_04218ea8(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  int local_54;
  undefined1 local_50 [16];
  undefined8 *puVar7;
  
  puVar3 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__;
  if ((DAT_048411be & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04590d38);
    thunk_FUN_01efb3a4(PTR_DAT_04590d40);
    thunk_FUN_01efb3a4(PTR_DAT_04590d68);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04590d90);
    thunk_FUN_01efb3a4(PTR_DAT_04590d98);
    thunk_FUN_01efb3a4(PTR_DAT_04590da0);
    DAT_048411be = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar2 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
  param_2 = param_2 + -1;
  local_54 = param_2;
  if (-1 < param_2) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_042190f8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (param_2 < *(int *)(lVar8 + 0x18)) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      local_50 = FUN_03262af0(lVar8,param_2,*(undefined8 *)PTR_DAT_04590d40);
      if ((local_50._8_8_ & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_54);
        puVar7 = (undefined8 *)PTR_DAT_04590da0;
      }
      else {
        if (0 < local_50._12_4_) {
          local_50._0_8_ = param_3;
          thunk_FUN_01f51358(local_50,param_3);
          lVar8 = *(long *)(param_1 + 0x10);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar8 != 0) {
            FUN_03262b48(lVar8,param_2,local_50._0_8_,local_50._8_8_,*(undefined8 *)PTR_DAT_04590d68
                        );
            return;
          }
          goto LAB_042190f8;
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_54);
        puVar7 = (undefined8 *)PTR_DAT_04590d98;
      }
      uVar6 = *puVar7;
      goto LAB_042190ac;
    }
  }
  puVar4 = PTR_DAT_04590d90;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_54);
  uVar6 = *(undefined8 *)puVar4;
LAB_042190ac:
  uVar5 = FUN_03406290(uVar6,uVar5,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  FUN_0403ed64(uVar5,0);
  return;
}


