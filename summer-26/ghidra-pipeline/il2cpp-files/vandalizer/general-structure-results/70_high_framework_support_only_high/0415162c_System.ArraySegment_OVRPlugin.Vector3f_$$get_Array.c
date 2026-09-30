/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector3f>$$get_Array
ENTRY_POINT: 0415162c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * System_ArraySegment<OVRPlugin_Vector3f>__get_Array(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  
  lVar3 = (**(code **)(param_1 + 0x458))();
  if (lVar3 == 0) {
LAB_04151898:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0415189c:
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  plVar8 = *(long **)(lVar3 + 0x20);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar8);
    }
  }
  uVar9 = *(undefined8 *)PTR_DAT_075d8780;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
  plVar5 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
  if (plVar5 == (long *)0x0) goto LAB_04151898;
  if ((plVar8 != (long *)0x0) &&
     (lVar3 = thunk_FUN_0322f04c(plVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
    uVar9 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar9,0);
  }
  if ((int)plVar5[3] == 0) goto LAB_0415189c;
  plVar5[4] = (long)plVar8;
  thunk_FUN_0329bf60(plVar5 + 4,plVar8);
  if ((plVar4 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*plVar4 + 0x928))
                                 (plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x930)),
     plVar4 == (long *)0x0)) goto LAB_04151898;
  uVar6 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x2a0));
  if ((uVar6 & 1) == 0) {
    uVar6 = (**(code **)(*unaff_x20 + 0x588))();
    if ((uVar6 & 1) == 0) {
switchD_041517f4_default:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      plVar8 = (long *)thunk_FUN_0322f148();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4(lVar3);
      }
      FUN_04c52d48(plVar8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
      return plVar8;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar9 = FUN_05e358c8();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_05e1c2f8(uVar9,0);
    switch(uVar2) {
    case 5:
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d87a8;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d8770;
      break;
    case 7:
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d87b0;
      break;
    case 0xb:
    case 0xc:
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar7 = (undefined8 *)PTR_DAT_075d8790;
      break;
    default:
      goto switchD_041517f4_default;
    }
    uVar9 = *puVar7;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
    }
  }
  else {
    uVar9 = *(undefined8 *)PTR_DAT_075d8798;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar9 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar9,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
    }
  }
  plVar8 = (long *)FUN_05e42e8c(uVar9);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4(lVar3);
  }
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar8);
    }
  }
  return plVar8;
}


