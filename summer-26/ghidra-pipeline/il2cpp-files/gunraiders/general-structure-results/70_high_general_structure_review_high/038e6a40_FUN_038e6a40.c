/*
FUNCTION_NAME: FUN_038e6a40
ENTRY_POINT: 038e6a40
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_038e6a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_38;
  undefined8 local_28;
  
  puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  local_28 = param_2;
  if ((DAT_045397a4 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(Method_ExitGames_Client_Photon_Protocol16_Serialize__);
    FUN_01c5d288(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
    DAT_045397a4 = 1;
  }
  local_38 = 0;
  *param_5 = 0;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar3 = *(long *)puVar2;
  }
  plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x58);
  if (plVar4 != (long *)0x0) {
    lVar3 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,&local_28,param_1,*(undefined8 *)(*plVar4 + 0x180));
    uVar5 = local_28;
    if (lVar3 == 0) {
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0)
          == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar3 = System_ComponentModel_ExtendedPropertyDescriptor__get_IsReadOnly(uVar5,&local_38,0);
      if (lVar3 == 0) {
        if (local_38 != 0) {
          uVar5 = FUN_038f68c0(local_38,0);
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(lVar3);
            lVar3 = *(long *)puVar2;
          }
          plVar4 = *(long **)(*(long *)(lVar3 + 0xb8) + 0x58);
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)Method_ExitGames_Client_Photon_Protocol16_Serialize__ + 0x130
                             );
            if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)Method_ExitGames_Client_Photon_Protocol16_Serialize__)) {
              lVar3 = System_Net_IPAddress___ctor(plVar4,uVar5,param_1,0);
              if (lVar3 != 0) {
                return;
              }
              *param_5 = local_38;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748();
          }
        }
        goto LAB_038e6ba4;
      }
    }
    return;
  }
LAB_038e6ba4:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


