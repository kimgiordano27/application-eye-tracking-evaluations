/*
FUNCTION_NAME: FUN_0346f1ec
ENTRY_POINT: 0346f1ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0346f3b4) */
/* WARNING: Removing unreachable block (ram,0x0346f454) */

undefined8 FUN_0346f1ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  if ((DAT_048329df & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_SetDictionaryItem_Set__);
    thunk_FUN_01efb3a4(Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
    thunk_FUN_01efb3a4(Method_TMPro_SetPropertyUtility_SetStruct<float>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    thunk_FUN_01efb3a4(Method_Gameplay_ShootingController_<ShootInternal>b__20_0__);
    DAT_048329df = 1;
  }
  lVar3 = FUN_034758c0(param_2,0);
  if (lVar3 == 0) {
    plVar6 = (long *)FUN_0346f0f4(param_2);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar8 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
  }
  else {
    lVar8 = 0;
  }
  uVar4 = FUN_035d6f50(0);
  puVar2 = Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  lVar5 = *(long *)Method_Sirenix_Serialization_SerializationUtility_SerializeValue<object>__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  plVar6 = (long *)FUN_01f08890(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                ,2);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar8 != 0) &&
     (lVar5 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
    uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar6[4] = lVar8;
  thunk_FUN_01f51358(plVar6 + 4,lVar8);
  if ((lVar3 != 0) &&
     (lVar8 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
    uVar4 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,0);
  }
  if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  plVar6[5] = lVar3;
  thunk_FUN_01f51358(plVar6 + 5,lVar3);
  plVar6 = (long *)FUN_035aef70(uVar1,uVar7,0,plVar6,0);
  if (plVar6 != (long *)0x0) {
    if (*(long *)(*plVar6 + 0x40) ==
        *(long *)(*(long *)Method_Gameplay_ShootingController_<ShootInternal>b__20_0__ + 0x40)) {
      plVar6 = (long *)thunk_FUN_01f11920();
      lVar3 = *plVar6;
      lVar8 = plVar6[1];
      thunk_FUN_01ec9ee0(uVar4,0);
      if (lVar3 == 0) {
        uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_TMPro_SetPropertyUtility_SetStruct<float>__
                                  );
        uVar7 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                            Method_Unity_VisualScripting_SetDictionaryItem_Set__);
        FUN_0347c1d4(uVar4,uVar7,lVar8,0);
      }
      else {
        uVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_InputManager_TryGetDevice__);
        FUN_034c78ec(uVar7,lVar3,0);
        thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                    Method_Unity_VisualScripting_SetDictionaryItem_Set__);
        FUN_0346f638();
      }
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


