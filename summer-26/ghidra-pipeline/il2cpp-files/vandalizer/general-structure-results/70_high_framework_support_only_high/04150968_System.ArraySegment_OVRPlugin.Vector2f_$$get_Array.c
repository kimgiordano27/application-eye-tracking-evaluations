/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Vector2f>$$get_Array
ENTRY_POINT: 04150968
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


long * System_ArraySegment<OVRPlugin_Vector2f>__get_Array(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x25;
  
  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  puVar2 = PTR_DAT_075d6660;
  plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex();
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_04150e60;
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar6 = FUN_05e19a88(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar7 + 0x20,0);
    uVar6 = FUN_05e19a88(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8788);
      FUN_05db4a28(plVar4,0);
      goto LAB_04150a4c;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    plVar10 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    if (plVar10 == (long *)0x0) {
LAB_04150e68:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar6 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar4,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_04150e68;
      uVar6 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
      if ((uVar6 & 1) == 0) {
LAB_04150d4c:
        uVar6 = (**(code **)(*plVar4 + 0x588))(plVar4,*(undefined8 *)(*plVar4 + 0x590));
        if ((uVar6 & 1) == 0) {
switchD_04150dc4_default:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0322bef4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          plVar4 = (long *)thunk_FUN_0322f148();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0322bef4(lVar7);
          }
          FUN_04c52988(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar4;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar5 = FUN_05e358c8(plVar4,0);
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(unaff_x25 + 0xe0));
        }
        uVar3 = FUN_05e1c2f8(uVar5,0);
        switch(uVar3) {
        case 5:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d87a8;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d8770;
          break;
        case 7:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d87b0;
          break;
        case 0xb:
        case 0xc:
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_075d8790;
          break;
        default:
          goto switchD_04150dc4_default;
        }
        goto LAB_04150ac4;
      }
      uVar5 = (**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
      uVar12 = *(undefined8 *)PTR_DAT_075d87a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)(unaff_x25 + 0xe0));
      }
      uVar12 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      uVar6 = FUN_05e19a88(uVar5,uVar12,0);
      if ((uVar6 & 1) == 0) goto LAB_04150d4c;
      lVar7 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
      if (lVar7 == 0) goto LAB_04150e68;
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_04150e6c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar10 = *(long **)(lVar7 + 0x20);
      if (plVar10 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar10);
        }
      }
      uVar5 = *(undefined8 *)PTR_DAT_075d8780;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar8 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
      plVar9 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
      if (plVar9 == (long *)0x0) goto LAB_04150e68;
      if ((plVar10 != (long *)0x0) &&
         (lVar7 = thunk_FUN_0322f04c(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
        uVar5 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar5,0);
      }
      if ((int)plVar9[3] == 0) goto LAB_04150e6c;
      plVar9[4] = (long)plVar10;
      thunk_FUN_0329bf60(plVar9 + 4,plVar10);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x928))
                                     (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x930)),
         plVar8 == (long *)0x0)) goto LAB_04150e68;
      uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar6 & 1) == 0) goto LAB_04150d4c;
      uVar5 = *(undefined8 *)PTR_DAT_075d8798;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
      plVar4 = plVar10;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
      }
    }
    else {
      lVar7 = *(long *)(unaff_x25 + 0xe0);
      puVar11 = (undefined8 *)PTR_DAT_075d8778;
LAB_04150ac4:
      uVar5 = *puVar11;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
      }
    }
    plVar4 = (long *)FUN_05e42e8c(uVar5,plVar4,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4(lVar7);
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8768);
    FUN_05db4928(plVar4,0);
LAB_04150a4c:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0322bef4();
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar10;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0322bef4(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_04150e60:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar4);
    }
  }
  return plVar4;
}


