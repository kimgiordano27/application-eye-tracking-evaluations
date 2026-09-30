/*
FUNCTION_NAME: FUN_088d2d4c
ENTRY_POINT: 088d2d4c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_088d2d4c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  if ((DAT_0a52fd78 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f91910);
    FUN_04447ba8(PTR_DAT_09f27e50);
    FUN_04447ba8(PTR_DAT_09f49260);
    FUN_04447ba8(PTR_DAT_09f91a10);
    FUN_04447ba8(PTR_DAT_09f91a18);
    FUN_04447ba8(PTR_DAT_09f91a20);
    FUN_04447ba8(PTR_DAT_09f91a28);
    DAT_0a52fd78 = 1;
  }
  local_28 = 0;
  uVar1 = FUN_088d2f98(param_1,*(undefined8 *)(param_1 + 0x38),&local_28);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_088d31fc(param_1,*(undefined8 *)(param_1 + 0x38),&local_28), (uVar1 & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0xa8);
    thunk_FUN_04456600();
    if (lVar3 != 0) {
      FUN_088cfc7c(lVar3,local_28);
      lVar3 = *(long *)(param_1 + 0xa8);
      thunk_FUN_04456600();
      plVar2 = *(long **)(param_1 + 0x38);
      if ((plVar2 != (long *)0x0) &&
         (uVar4 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170)),
         lVar3 != 0)) {
        FUN_088cfc38(lVar3,uVar4);
        FUN_088d31bc(param_1,0x3ea,*(undefined8 *)PTR_DAT_09f91a28);
        return 0;
      }
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0x38);
    if ((plVar2 != (long *)0x0) &&
       (lVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400)), lVar3 != 0))
    {
      uVar4 = FUN_0882a490(lVar3,*(undefined8 *)PTR_DAT_09f91a18,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_044bb4b4();
      plVar2 = (long *)(param_1 + 0xe0);
      if (*plVar2 != 0) {
        plVar5 = *(long **)(param_1 + 0x38);
        if (plVar5 == (long *)0x0) goto LAB_088d2f94;
        uVar4 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
        uVar6 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f49260);
        FUN_05562504(uVar6,param_1,*(undefined8 *)PTR_DAT_09f91a10,0);
        if (*(int *)(*(long *)PTR_DAT_09f27e50 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar1 = Unity_Netcode_BufferSerializer<BufferSerializerReader>__SerializeNetworkSerializable<NetworkDeltaPosition>
                          (uVar4,uVar6,*(undefined8 *)PTR_DAT_09f91910);
        if ((uVar1 & 1) == 0) {
          *plVar2 = 0;
          thunk_FUN_044bb4b4(plVar2,0);
        }
      }
      if (*(char *)(param_1 + 0xa0) == '\0') {
        plVar2 = *(long **)(param_1 + 0x38);
        if ((plVar2 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400)),
           lVar3 == 0)) goto LAB_088d2f94;
        uVar4 = FUN_0882a490(lVar3,*(undefined8 *)PTR_DAT_09f91a20,0);
        FUN_088d326c(param_1,uVar4);
      }
      lVar3 = UnityEngine_InputSystem_InputActionSetupExtensions__AddControlScheme(param_1);
      if (lVar3 != 0) {
        FUN_088ccbd8(lVar3,*(undefined8 *)(param_1 + 0x128));
        return 1;
      }
    }
  }
LAB_088d2f94:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


