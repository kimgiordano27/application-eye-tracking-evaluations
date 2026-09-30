/*
FUNCTION_NAME: FUN_04088238
ENTRY_POINT: 04088238
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_04088238(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04587848;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if ((DAT_0483ec78 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<WrapMode>_WriteValue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04587848);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(PTR_DAT_04587850);
    DAT_0483ec78 = 1;
  }
  plVar3 = (long *)FUN_01f08890(*(undefined8 *)puVar1,7);
  local_24 = *(undefined4 *)(param_1 + 3);
  lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar2,&local_24);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_04088518:
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    thunk_FUN_01f51358(plVar3 + 4,lVar4);
    local_28 = *(undefined4 *)((long)param_1 + 0x1c);
    lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_28);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_04088518;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      thunk_FUN_01f51358(plVar3 + 5,lVar4);
      local_34 = *(undefined4 *)(param_1 + 4);
      lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_34);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_04088518;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        thunk_FUN_01f51358(plVar3 + 6,lVar4);
        local_38 = *(undefined4 *)(param_1 + 5);
        lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_38);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_04088518;
        if (3 < *(uint *)(plVar3 + 3)) {
          plVar3[7] = lVar4;
          thunk_FUN_01f51358(plVar3 + 7,lVar4);
          local_3c = *(undefined4 *)((long)param_1 + 0x2c);
          lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_3c);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_04088518;
          if (4 < *(uint *)(plVar3 + 3)) {
            plVar3[8] = lVar4;
            thunk_FUN_01f51358(plVar3 + 8,lVar4);
            local_40 = *(undefined4 *)((long)param_1 + 0x24);
            lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_40);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_04088518;
            puVar1 = Method_Sirenix_Serialization_Serializer<WrapMode>_WriteValue__;
            if (5 < *(uint *)(plVar3 + 3)) {
              plVar3[9] = lVar4;
              thunk_FUN_01f51358(plVar3 + 9,lVar4);
              local_50 = param_1[2];
              uStack_58 = param_1[1];
              local_60 = *param_1;
              lVar4 = thunk_FUN_01f113fc(*(undefined8 *)puVar1,&local_60);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_04088518;
              puVar1 = PTR_DAT_04587850;
              if (6 < *(uint *)(plVar3 + 3)) {
                plVar3[10] = lVar4;
                thunk_FUN_01f51358(plVar3 + 10,lVar4);
                FUN_0340f378(*(undefined8 *)puVar1,plVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


