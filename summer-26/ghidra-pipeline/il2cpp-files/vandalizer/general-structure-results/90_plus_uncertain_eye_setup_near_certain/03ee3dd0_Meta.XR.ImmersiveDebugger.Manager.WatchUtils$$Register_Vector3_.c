/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<Vector3>
ENTRY_POINT: 03ee3dd0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<Vector3>(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(param_2 + 0x38);
  if (lVar7 == 0) {
    FUN_031f20f4(PTR_DAT_075d7c70);
    FUN_031f20f4(PTR_DAT_075d7c78);
    FUN_031f20f4(PTR_DAT_075d7c80);
    FUN_031f20f4(PTR_DAT_075d7c88);
    FUN_031f20f4(PTR_DAT_075b7560);
    FUN_031f20f4(PTR_DAT_075d7c68);
    lVar7 = *(long *)(param_2 + 0x38);
    if (lVar7 == 0) {
      FUN_0322bf50(param_2);
      lVar7 = *(long *)(param_2 + 0x38);
    }
  }
  lVar7 = *(long *)(lVar7 + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar9 = **(long **)(param_2 + 0x38);
  lVar7 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
                    /* try { // try from 03ee3eac to 03fe3ed3 has its CatchHandler @ 03ee4064 */
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0xb) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    FUN_02d65908(*(undefined8 *)(PTR_DAT_0759b388 + 0xe0));
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
    puVar6 = PTR_DAT_075d7c90;
LAB_03ee42e8:
    uVar10 = thunk_FUN_03257e30(puVar6);
    uVar4 = FUN_05c7ecc4(uVar10,uVar4,0);
    thunk_FUN_03257e30(PTR_DAT_0759b3f0);
    uVar10 = thunk_FUN_0322f148();
    FUN_05e38b50(uVar10,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar10,param_2);
  }
  lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar9 = *(long *)(*(long *)(param_2 + 0x38) + 0x18);
  lVar7 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar7 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0xe) != '\0') {
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    FUN_02d65908(*(undefined8 *)(PTR_DAT_0759b388 + 0xe0));
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
    puVar6 = PTR_DAT_075d7c98;
    goto LAB_03ee42e8;
  }
  lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  if (**(long **)(lVar7 + 0xb8) != 0) {
    lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x30);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    if ((**(long **)(lVar7 + 0xb8) == 0) ||
       (plVar3 = (long *)thunk_FUN_03202440(**(long **)(lVar7 + 0xb8),0), plVar3 == (long *)0x0))
    goto LAB_03ee4288;
    uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    puVar6 = PTR_DAT_0759b388;
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(PTR_DAT_0759b388 + 0xe0));
    }
    plVar3 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
    if (plVar3 == (long *)0x0) goto LAB_03ee4288;
    uVar10 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    uVar5 = FUN_05d4290c(uVar4,uVar10,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (param_1 == 0) goto LAB_03ee4288;
    uVar4 = thunk_FUN_03202440(param_1,0);
    uVar4 = FUN_03d8fe44(uVar4,*(undefined8 *)PTR_DAT_075d7c80);
    uVar5 = FUN_03dabfac(uVar4,*(undefined8 *)PTR_DAT_075d7c88);
    if ((uVar5 & 1) != 0) {
      plVar3 = (long *)thunk_FUN_03202440(param_1,0);
      if (plVar3 == (long *)0x0) goto LAB_03ee4288;
      uVar4 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar6 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(puVar6 + 0xe0))
        ;
      }
      plVar3 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
      if (plVar3 == (long *)0x0) goto LAB_03ee4288;
      uVar10 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
      uVar5 = FUN_05d41ff0(uVar4,uVar10,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
  }
  lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  **(long **)(lVar7 + 0xb8) = param_1;
  lVar7 = *(long *)(*(long *)(param_2 + 0x38) + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4();
  }
  thunk_FUN_0329bf60(*(undefined8 *)(lVar7 + 0xb8),param_1);
  puVar6 = PTR_DAT_075d7c68;
  lVar7 = *(long *)PTR_DAT_075d7c68;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar6;
  }
  puVar2 = PTR_DAT_0759b388;
  lVar7 = **(long **)(lVar7 + 0xb8);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
  if (lVar7 == 0) goto LAB_03ee4288;
  uVar5 = FUN_055a6958(lVar7,uVar4,*(undefined8 *)PTR_DAT_075d7c70);
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)puVar6;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar7 = *(long *)puVar6;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
    if (lVar7 == 0) goto LAB_03ee4288;
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar8 = *(long *)PTR_DAT_075b7560;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_03ee4288;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_0329bf60();
    }
    else {
      FUN_047af440(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar7 = *(long *)puVar6;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar6;
  }
  lVar7 = **(long **)(lVar7 + 0xb8);
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
  if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
  if (lVar7 != 0) {
    FUN_055a862c(lVar7,uVar4,param_1,*(undefined8 *)PTR_DAT_075d7c78);
    return;
  }
LAB_03ee4288:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


