/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<Vector3>$$.ctor
ENTRY_POINT: 051bb70c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<Vector3>___ctor(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x388);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)(lVar6 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
  if (lVar1 == 0) {
LAB_051bb8f4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar2 = FUN_05e1b9cc(lVar1,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_05e1b944(lVar1,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    uVar5 = *(undefined8 *)PTR_DAT_075d52f8;
    if (*(int *)(*(long *)(lVar6 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    plVar3 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    if (plVar3 == (long *)0x0) goto LAB_051bb8f4;
    uVar2 = (**(code **)(*plVar3 + 0x298))(plVar3,lVar1,*(undefined8 *)(*plVar3 + 0x2a0));
    if ((uVar2 & 1) == 0) {
      lVar7 = *(long *)PTR_DAT_075da570;
      lVar6 = *(long *)(lVar7 + 0x38);
      if (lVar6 == 0) {
        FUN_0322bf50(lVar7);
        lVar6 = *(long *)(lVar7 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4();
      }
      uVar5 = FUN_05e1bc40(lVar1,**(undefined8 **)(lVar6 + 0xb8),0);
      if (*(int *)(*(long *)PTR_DAT_075d7508 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_075d7508);
      }
      uVar2 = FUN_05d380b4(0,uVar5,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
         ) {
        FUN_0322bef4();
      }
      uVar5 = thunk_FUN_0322f148();
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      uVar4 = *(undefined8 *)(lVar6 + 0x50);
    }
    else {
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0
         ) {
        FUN_0322bef4();
      }
      uVar5 = thunk_FUN_0322f148();
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      uVar4 = *(undefined8 *)(lVar6 + 0x48);
    }
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
    {
      FUN_0322bef4();
    }
    uVar5 = thunk_FUN_0322f148();
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
    uVar4 = *(undefined8 *)(lVar6 + 0x38);
  }
  FUN_042cd974(uVar5,0,uVar4,*(undefined8 *)(lVar6 + 0x40));
  *(undefined8 *)(unaff_x19 + 0x18) = uVar5;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x19 + 0x18),uVar5);
  return;
}


