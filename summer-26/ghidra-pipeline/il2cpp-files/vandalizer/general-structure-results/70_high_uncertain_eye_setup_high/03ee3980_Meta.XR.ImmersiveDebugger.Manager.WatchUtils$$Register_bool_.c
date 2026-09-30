/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$Register<bool>
ENTRY_POINT: 03ee3980
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__Register<bool>(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  lVar4 = FUN_0322bef4();
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar9 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
  lVar4 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar4 = *(long *)(lVar9 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0xe) != '\0') {
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
                    /* try { // try from 03ee3d68 to 03fe3d8f has its CatchHandler @ 03ee3da4 */
    FUN_02d65908(*(undefined8 *)(PTR_DAT_0759b388 + 0xe0));
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar6,0);
    uVar10 = thunk_FUN_03257e30(PTR_DAT_075d7c98);
                    /* try { // try from 03ee3d90 to 03fe3d9b has its CatchHandler @ 03ee3894 */
    uVar6 = FUN_05c7ecc4(uVar10,uVar6,0);
                    /* try { // try from 03ee3d9c to 03fe3da3 has its CatchHandler @ 03ee3da4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ee3d68 with catch @ 03ee3da4
                       catch(type#2 @ 00000000) { ... } // from try @ 03ee3d9c with catch @ 03ee3da4
                        */
                    /* try { // try from 03ee3da8 to 03fe3eab has its CatchHandler @ 03ee3da8
                       catch() { ... } // from try @ 03ee3da8 with catch @ 03ee3da8
                       catch() { ... } // from try @ 03ee3f68 with catch @ 03ee3da8
                       catch() { ... } // from try @ 03ee4054 with catch @ 03ee3da8
                       catch() { ... } // from try @ 03ee4108 with catch @ 03ee3da8 */
    thunk_FUN_03257e30(PTR_DAT_0759b3f0);
    uVar10 = thunk_FUN_0322f148();
    FUN_05e38b50(uVar10,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar10);
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0322bef4();
    }
    if ((**(long **)(lVar4 + 0xb8) == 0) ||
       (plVar5 = (long *)thunk_FUN_03202440(**(long **)(lVar4 + 0xb8),0), plVar5 == (long *)0x0))
    goto LAB_03ee3d2c;
    uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    puVar2 = PTR_DAT_0759b388;
    uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(PTR_DAT_0759b388 + 0xe0));
    }
    plVar5 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
    if (plVar5 == (long *)0x0) goto LAB_03ee3d2c;
    uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
    uVar7 = FUN_05d4290c(uVar6,uVar10,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (unaff_x20 == 0) goto LAB_03ee3d2c;
    uVar6 = thunk_FUN_03202440();
    uVar6 = FUN_03d8fe44(uVar6,*(undefined8 *)PTR_DAT_075d7c80);
    uVar7 = FUN_03dabfac(uVar6,*(undefined8 *)PTR_DAT_075d7c88);
    if ((uVar7 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_03202440();
      if (plVar5 == (long *)0x0) goto LAB_03ee3d2c;
      uVar6 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar10 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(puVar2 + 0xe0))
        ;
      }
      plVar5 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar10,0);
      if (plVar5 == (long *)0x0) goto LAB_03ee3d2c;
      uVar10 = (**(code **)(*plVar5 + 0x2e8))(plVar5,*(undefined8 *)(*plVar5 + 0x2f0));
      uVar7 = FUN_05d41ff0(uVar6,uVar10,0);
      if ((uVar7 & 1) != 0) {
        return;
      }
    }
  }
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  **(long **)(lVar4 + 0xb8) = unaff_x20;
  lVar4 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  thunk_FUN_0329bf60(*(undefined8 *)(lVar4 + 0xb8));
  puVar2 = PTR_DAT_075d7c68;
  lVar4 = *(long *)PTR_DAT_075d7c68;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_0759b388;
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar6,0);
  if (lVar4 == 0) goto LAB_03ee3d2c;
  uVar7 = FUN_055a6958(lVar4,uVar6,*(undefined8 *)PTR_DAT_075d7c70);
  if ((uVar7 & 1) == 0) {
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar6,0);
    if (lVar4 == 0) goto LAB_03ee3d2c;
    lVar9 = *(long *)(lVar4 + 0x10);
    lVar8 = *(long *)PTR_DAT_075b7560;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_03ee3d2c;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_0329bf60();
    }
    else {
      FUN_047af440(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar6,0);
  if (lVar4 != 0) {
    FUN_055a862c(lVar4,uVar6);
    return;
  }
LAB_03ee3d2c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


