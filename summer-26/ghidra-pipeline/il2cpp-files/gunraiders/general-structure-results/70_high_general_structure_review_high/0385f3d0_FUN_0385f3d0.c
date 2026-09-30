/*
FUNCTION_NAME: FUN_0385f3d0
ENTRY_POINT: 0385f3d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_7;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_0385f3d0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_0453934e & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
    FUN_01c5d288(
                Method_UnityEngine_UIElements_MultiColumnListViewController_UpdateReorderClassList__
                );
    DAT_0453934e = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    uVar5 = thunk_FUN_01c273e8(
                              Method_VoxelBusters_CoreLibrary_NativePlugins_NativeFeatureBehaviour_CreateInstanceInternal<SocialShareComposer>__
                              );
    uVar5 = FUN_038925d8(uVar5,0);
    thunk_FUN_01c273e8(PTR_DAT_04231770);
    uVar6 = thunk_FUN_01c496e0();
    FUN_032467a0(uVar6,uVar5,0);
    uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_InternalSocket__);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar5);
  }
  if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0) == 0
     ) {
    thunk_FUN_01c1d1e8();
  }
  FUN_038927e4(param_2,1,0);
  if (*(int *)(param_1 + 0xa0) != 1) {
    FUN_0385f0cc(param_1,4);
    if (*(char *)(param_1 + 0xa4) != '\0') {
      *(undefined4 *)(param_1 + 0x98) = 0x10;
      uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_Length__);
      uVar5 = FUN_038925d8(uVar5,0);
      thunk_FUN_01c273e8(PTR_DAT_04237cd0);
      uVar6 = thunk_FUN_01c496e0();
      FUN_032d1aa4(uVar6,uVar5,0);
      uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_InternalSocket__);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,uVar5);
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      *(undefined4 *)(param_1 + 0xa0) = 2;
      puVar1 = Method_UnityEngine_UIElements_MultiColumnListViewController_UpdateReorderClassList__;
      lVar3 = *(long *)
               Method_UnityEngine_UIElements_MultiColumnListViewController_UpdateReorderClassList__;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *(long *)puVar1;
      }
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
    }
    if (*(char *)(param_1 + 0x9c) != '\0') {
      if (param_3 != 0) {
        iVar2 = FUN_03890ae8(param_1 + 0xa8,param_3,0);
        if (-1 < iVar2) {
          uVar5 = FUN_0388fbf4(param_3,iVar2,0);
          uVar6 = thunk_FUN_01c273e8(
                                    Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                                    );
          uVar5 = FUN_0389021c(uVar6,uVar5,0);
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar6 = thunk_FUN_01c496e0();
          uVar7 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_Position__);
          FUN_0323fce4(uVar6,uVar5,uVar7,0);
          uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_InternalSocket__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar5);
        }
      }
      if (param_4 != 0) {
        iVar2 = FUN_03890968(param_1 + 0xa8,param_4,0);
        if (-1 < iVar2) {
          uVar5 = FUN_0388fbf4(param_4,iVar2,0);
          uVar6 = thunk_FUN_01c273e8(
                                    Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                                    );
          uVar5 = FUN_0389021c(uVar6,uVar5,0);
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar6 = thunk_FUN_01c496e0();
          uVar7 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_set_Position__);
          FUN_0323fce4(uVar6,uVar5,uVar7,0);
          uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_InternalSocket__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar5);
        }
      }
      if (param_5 != 0) {
        iVar2 = FUN_03890968(param_1 + 0xa8,param_5,0);
        if (-1 < iVar2) {
          uVar5 = FUN_0388fbf4(param_5,iVar2,0);
          uVar6 = thunk_FUN_01c273e8(
                                    Method_System_Net_HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData__
                                    );
          uVar5 = FUN_0389021c(uVar6,uVar5,0);
          thunk_FUN_01c273e8(PTR_DAT_04231770);
          uVar6 = thunk_FUN_01c496e0();
          uVar7 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_set_ReadTimeout__);
          FUN_0323fce4(uVar6,uVar5,uVar7,0);
          uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_InternalSocket__);
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar6,uVar5);
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0x18);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x1b8))
                (plVar4,param_2,param_3,param_4,param_5,*(undefined8 *)(*plVar4 + 0x1c0));
      *(undefined1 *)(param_1 + 0xa4) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar5 = thunk_FUN_01c273e8(
                            Method_VoxelBusters_EssentialKit_Demo_GameServicesDemo_<OnActionSelectInternal>b__13_7__
                            );
  uVar5 = FUN_038925d8(uVar5,0);
  thunk_FUN_01c273e8(PTR_DAT_04237cd0);
  uVar6 = thunk_FUN_01c496e0();
  FUN_032d1aa4(uVar6,uVar5,0);
  uVar5 = thunk_FUN_01c273e8(Method_System_Net_Sockets_NetworkStream_get_InternalSocket__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar6,uVar5);
}


