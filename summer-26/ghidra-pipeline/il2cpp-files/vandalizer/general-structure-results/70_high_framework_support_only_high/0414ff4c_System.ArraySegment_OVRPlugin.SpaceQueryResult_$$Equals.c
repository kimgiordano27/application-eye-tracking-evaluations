/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 0414ff4c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


long * System_ArraySegment<OVRPlugin_SpaceQueryResult>__Equals(void)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  plVar3 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex();
  if (plVar3 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24))
    goto LAB_04150430;
  }
  uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar5 = FUN_05e19a88(plVar3,uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(lVar6 + 0x20,0);
    uVar5 = FUN_05e19a88(plVar3,uVar4,0);
    if ((uVar5 & 1) != 0) {
      plVar3 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8788);
      FUN_05db4a28(plVar3,0);
      goto System_ArraySegment<OVRPlugin_SpaceQueryResult>__op_Inequality;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0322bef4();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x25 + 0xe0));
    }
    plVar9 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
    if (plVar9 == (long *)0x0) {
LAB_04150438:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    uVar5 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar3,*(undefined8 *)(*plVar9 + 0x2a0));
    if ((uVar5 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_04150438;
      uVar5 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if ((uVar5 & 1) == 0) {
LAB_0415031c:
        uVar5 = (**(code **)(*plVar3 + 0x588))(plVar3,*(undefined8 *)(*plVar3 + 0x590));
        if ((uVar5 & 1) == 0) {
switchD_04150394_default:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0322bef4();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          plVar3 = (long *)thunk_FUN_0322f148();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0322bef4(lVar6);
          }
          FUN_04c52600(plVar3,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar3;
        }
        if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar4 = FUN_05e358c8(plVar3,0);
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)(unaff_x25 + 0xe0));
        }
        uVar2 = FUN_05e1c2f8(uVar4,0);
        switch(uVar2) {
        case 5:
          lVar6 = *(long *)(unaff_x25 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_075d87a8;
          break;
        case 6:
        case 8:
        case 9:
        case 10:
          lVar6 = *(long *)(unaff_x25 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_075d8770;
          break;
        case 7:
          lVar6 = *(long *)(unaff_x25 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_075d87b0;
          break;
        case 0xb:
        case 0xc:
          lVar6 = *(long *)(unaff_x25 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_075d8790;
          break;
        default:
          goto switchD_04150394_default;
        }
        goto LAB_04150094;
      }
      uVar4 = (**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
      uVar11 = *(undefined8 *)PTR_DAT_075d87a0;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)(unaff_x25 + 0xe0));
      }
      uVar11 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar11,0);
      uVar5 = FUN_05e19a88(uVar4,uVar11,0);
      if ((uVar5 & 1) == 0) goto LAB_0415031c;
      lVar6 = (**(code **)(*plVar3 + 0x458))(plVar3,*(undefined8 *)(*plVar3 + 0x460));
      if (lVar6 == 0) goto LAB_04150438;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0415043c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar9 = *(long **)(lVar6 + 0x20);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2730(plVar9);
        }
      }
      uVar4 = *(undefined8 *)PTR_DAT_075d8780;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar7 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
      plVar8 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,1);
      if (plVar8 == (long *)0x0) goto LAB_04150438;
      if ((plVar9 != (long *)0x0) &&
         (lVar6 = thunk_FUN_0322f04c(plVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
        uVar4 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar4,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_0415043c;
      plVar8[4] = (long)plVar9;
      thunk_FUN_0329bf60(plVar8 + 4,plVar9);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x928))
                                     (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x930)),
         plVar7 == (long *)0x0)) goto LAB_04150438;
      uVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x2a0));
      if ((uVar5 & 1) == 0) goto LAB_0415031c;
      uVar4 = *(undefined8 *)PTR_DAT_075d8798;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
      plVar3 = plVar9;
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar10 = (undefined8 *)PTR_DAT_075d8778;
LAB_04150094:
      uVar4 = *puVar10;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar4 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x24);
      }
    }
    plVar3 = (long *)FUN_05e42e8c(uVar4,plVar3,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0322bef4(lVar6);
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar3 = (long *)thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075d8768);
    FUN_05db4928(plVar3,0);
System_ArraySegment<OVRPlugin_SpaceQueryResult>__op_Inequality:
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0322bef4();
    }
    plVar9 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar9;
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0322bef4(lVar6);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_04150430:
                    /* WARNING: Subroutine does not return */
      FUN_031f2730(plVar3);
    }
  }
  return plVar3;
}


