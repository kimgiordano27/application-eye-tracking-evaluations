/*
FUNCTION_NAME: Oculus.Interaction.Surfaces.ColliderSurface$$Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint
ENTRY_POINT: 05ed84ac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void Oculus_Interaction_Surfaces_ColliderSurface__Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0x400));
  FUN_031f20f4(PTR_DAT_075f0638);
  FUN_031f20f4(PTR_DAT_075f0aa8);
  FUN_031f20f4(PTR_DAT_075d7da0);
  FUN_031f20f4(PTR_DAT_075f1510);
  FUN_031f20f4(PTR_DAT_075d6f28);
  FUN_031f20f4(PTR_DAT_0759b3b8);
  FUN_031f20f4(PTR_DAT_075f11c0);
  FUN_031f20f4(PTR_DAT_075f1178);
  *(undefined1 *)(unaff_x21 + 0xdf2) = 1;
  puVar2 = PTR_DAT_075d6f28;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  FUN_05ed6508();
  *(undefined4 *)(unaff_x19 + 0x24) = 5;
  puVar1 = PTR_DAT_0759b388;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
  uVar13 = *unaff_x24;
  if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
  plVar9 = (long *)(unaff_x19 + 0xe0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar3 = PTR_DAT_075e5400;
  uVar6 = FUN_05ec765c(uVar12,uVar13,plVar9,0);
  puVar4 = PTR_DAT_075f0638;
  if ((uVar6 & 1) == 0) {
    uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar13 = *(undefined8 *)PTR_DAT_075f0638;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
    }
    uVar6 = FUN_05ec765c(uVar12,uVar13,plVar9,0);
    if ((uVar6 & 1) != 0) {
      plVar7 = (long *)*plVar9;
      if (plVar7 == (long *)0x0) goto LAB_05ed8e78;
      lVar8 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
      if (lVar8 == 0) goto LAB_05ed8e78;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05ed8e7c;
      lVar8 = *(long *)(lVar8 + 0x20);
      plVar9 = (long *)*plVar9;
      in_stack_00000018 = lVar8;
      if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
      lVar10 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
      if (lVar10 == 0) goto LAB_05ed8e78;
      if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05ed8e7c;
      in_stack_00000010 = *(long *)(lVar10 + 0x28);
      uVar13 = *(undefined8 *)puVar4;
      uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
      }
      uVar6 = FUN_05ec75d4(uVar12,uVar13,0);
      if ((uVar6 & 1) != 0) {
        uVar12 = *(undefined8 *)PTR_DAT_075f1510;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        plVar9 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
        plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
        if (plVar7 == (long *)0x0) goto LAB_05ed8e78;
        if ((lVar8 != 0) &&
           (lVar10 = thunk_FUN_0322f04c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
        goto LAB_05ed8e80;
        if ((int)plVar7[3] == 0) goto LAB_05ed8e7c;
        plVar7[4] = lVar8;
        thunk_FUN_0329bf60(plVar7 + 4,lVar8);
        lVar8 = in_stack_00000010;
        if ((in_stack_00000010 != 0) &&
           (lVar10 = thunk_FUN_0322f04c(in_stack_00000010,*(undefined8 *)(*plVar7 + 0x40)),
           lVar10 == 0)) goto LAB_05ed8e80;
        if (*(uint *)(plVar7 + 3) < 2) goto LAB_05ed8e7c;
        plVar7[5] = lVar8;
        thunk_FUN_0329bf60(plVar7 + 5,lVar8);
        if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
        (**(code **)(*plVar9 + 0x928))(plVar9,plVar7,*(undefined8 *)(*plVar9 + 0x930));
        FUN_05ed6614();
      }
      bVar5 = 1;
      goto LAB_05ed8a68;
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_05ec7df0(uVar12,&stack0x00000018,&stack0x00000010,0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar13 = *(undefined8 *)puVar3;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
    uVar6 = FUN_05e19a88(uVar12,uVar13,0);
    if ((uVar6 & 1) != 0) {
      uVar12 = *(undefined8 *)PTR_DAT_075f1508;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      FUN_05ed6614();
    }
  }
  else {
    plVar7 = (long *)*plVar9;
    if (plVar7 == (long *)0x0) goto LAB_05ed8e78;
    lVar8 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
    if (lVar8 == 0) goto LAB_05ed8e78;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05ed8e7c;
    lVar8 = *(long *)(lVar8 + 0x20);
    plVar9 = (long *)*plVar9;
    in_stack_00000018 = lVar8;
    if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
    lVar10 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460));
    if (lVar10 == 0) goto LAB_05ed8e78;
    if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_05ed8e7c;
    in_stack_00000010 = *(long *)(lVar10 + 0x28);
    uVar13 = *unaff_x24;
    uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
    }
    uVar6 = FUN_05ec75d4(uVar12,uVar13,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_05ec1c78(*(undefined8 *)(unaff_x19 + 0x18),0);
      if ((uVar6 & 1) != 0) {
        plVar9 = *(long **)(unaff_x19 + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
        plVar9 = (long *)(**(code **)(*plVar9 + 0x438))(plVar9,*(undefined8 *)(*plVar9 + 0x440));
        if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
        uVar12 = (**(code **)(*plVar9 + 0x2d8))(plVar9,*(undefined8 *)(*plVar9 + 0x2e0));
        uVar6 = thunk_FUN_05c86c8c(uVar12,*(undefined8 *)PTR_DAT_075f11c0,0);
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x100) = 1;
        }
      }
    }
    else {
      uVar12 = *(undefined8 *)PTR_DAT_075d7d50;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar9 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
      plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
      if (plVar7 == (long *)0x0) goto LAB_05ed8e78;
      if ((lVar8 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0))
      goto LAB_05ed8e80;
      if ((int)plVar7[3] == 0) goto LAB_05ed8e7c;
      plVar7[4] = lVar8;
      thunk_FUN_0329bf60(plVar7 + 4,lVar8);
      lVar8 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(in_stack_00000010,*(undefined8 *)(*plVar7 + 0x40)),
         lVar10 == 0)) goto LAB_05ed8e80;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_05ed8e7c;
      plVar7[5] = lVar8;
      thunk_FUN_0329bf60(plVar7 + 5,lVar8);
      if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
      (**(code **)(*plVar9 + 0x928))(plVar9,plVar7,*(undefined8 *)(*plVar9 + 0x930));
      FUN_05ed6614();
    }
    uVar12 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar13 = *(undefined8 *)PTR_DAT_075f1510;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar13 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
    }
    bVar5 = FUN_05ec78e4(uVar12,uVar13,0);
    bVar5 = bVar5 & 1;
LAB_05ed8a68:
    *(byte *)(unaff_x19 + 0x28) = bVar5;
  }
  lVar8 = in_stack_00000018;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar6 = FUN_05e1a748(lVar8,0,0);
  lVar8 = in_stack_00000010;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_05e1a748(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar13 = *(undefined8 *)PTR_DAT_075d7da0;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      plVar9 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar13,0);
      puVar2 = PTR_DAT_0759b3b8;
      plVar7 = (long *)FUN_031f21dc(*(undefined8 *)PTR_DAT_0759b3b8,2);
      lVar8 = in_stack_00000018;
      if (plVar7 == (long *)0x0) goto LAB_05ed8e78;
      if ((in_stack_00000018 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(in_stack_00000018,*(undefined8 *)(*plVar7 + 0x40)),
         lVar10 == 0)) {
LAB_05ed8e80:
        uVar12 = thunk_FUN_0323bcd4();
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar12,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_05ed8e7c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      plVar7[4] = lVar8;
      thunk_FUN_0329bf60(plVar7 + 4,lVar8);
      lVar8 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(in_stack_00000010,*(undefined8 *)(*plVar7 + 0x40)),
         lVar10 == 0)) goto LAB_05ed8e80;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_05ed8e7c;
      plVar7[5] = lVar8;
      thunk_FUN_0329bf60(plVar7 + 5,lVar8);
      if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
      uVar13 = (**(code **)(*plVar9 + 0x928))(plVar9,plVar7,*(undefined8 *)(*plVar9 + 0x930));
      plVar9 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*unaff_x24,0);
      plVar7 = (long *)FUN_031f21dc(*(undefined8 *)puVar2,2);
      lVar8 = in_stack_00000018;
      if (plVar7 == (long *)0x0) goto LAB_05ed8e78;
      if ((in_stack_00000018 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(in_stack_00000018,*(undefined8 *)(*plVar7 + 0x40)),
         lVar10 == 0)) goto LAB_05ed8e80;
      if ((int)plVar7[3] == 0) goto LAB_05ed8e7c;
      plVar7[4] = lVar8;
      thunk_FUN_0329bf60(plVar7 + 4,lVar8);
      lVar8 = in_stack_00000010;
      if ((in_stack_00000010 != 0) &&
         (lVar10 = thunk_FUN_0322f04c(in_stack_00000010,*(undefined8 *)(*plVar7 + 0x40)),
         lVar10 == 0)) goto LAB_05ed8e80;
      if (*(uint *)(plVar7 + 3) < 2) goto LAB_05ed8e7c;
      plVar7[5] = lVar8;
      thunk_FUN_0329bf60(plVar7 + 5,lVar8);
      if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
      uVar11 = (**(code **)(*plVar9 + 0x928))(plVar9,plVar7,*(undefined8 *)(*plVar9 + 0x930));
      uVar12 = FUN_05eb4e50(uVar12,uVar13,uVar11,0);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar12;
      thunk_FUN_0329bf60(unaff_x19 + 0x108);
      uVar6 = FUN_05ed83c4();
      if ((uVar6 & 1) == 0) {
        plVar9 = *(long **)(unaff_x19 + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_05ed8e78;
        uVar12 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        uVar6 = thunk_FUN_05c86c8c(uVar12,*(undefined8 *)PTR_DAT_075f1178,0);
        if ((uVar6 & 1) != 0) {
          uVar12 = FUN_05ec1ca0(*(undefined8 *)(unaff_x19 + 0x18),0);
          puVar2 = PTR_DAT_075f09e0;
          if (*(int *)(*(long *)PTR_DAT_075f09e0 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_075f09e0);
          }
          FUN_05ec129c(uVar12,0);
          if (DAT_07a45e5e == '\0') {
            FUN_031f20f4(PTR_DAT_075f09e0);
            DAT_07a45e5e = '\x01';
          }
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar8 = *(long *)puVar2;
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
          if (lVar8 == 0) goto LAB_05ed8e78;
          uVar12 = FUN_05ec1518(lVar8,in_stack_00000018,in_stack_00000010,0);
          *(undefined8 *)(unaff_x19 + 0x118) = uVar12;
          thunk_FUN_0329bf60(unaff_x19 + 0x118);
        }
      }
    }
  }
  uVar12 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  plVar9 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar12,0);
  if (plVar9 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar9 + 0x298))
                      (plVar9,*(undefined8 *)(unaff_x19 + 0x58),*(undefined8 *)(*plVar9 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
    }
    plVar7 = (long *)(unaff_x19 + 200);
    *plVar7 = in_stack_00000018;
    thunk_FUN_0329bf60(plVar7);
    plVar9 = (long *)(unaff_x19 + 0xd0);
    *plVar9 = in_stack_00000010;
    thunk_FUN_0329bf60(plVar9);
    lVar8 = *plVar7;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_05e1a748(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = *plVar9;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar6 = FUN_05e1a748(lVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x19 + 0x18);
        uVar12 = *(undefined8 *)(unaff_x19 + 200);
        uVar13 = *(undefined8 *)(unaff_x19 + 0xd0);
        if (*(int *)(*(long *)PTR_DAT_075f0aa8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar6 = FUN_05ec1cc0(uVar11,uVar12,uVar13,&stack0x00000008);
        if ((uVar6 & 1) != 0) {
          FUN_05ed6614();
          *(undefined8 *)(unaff_x19 + 0x118) = 0;
          thunk_FUN_0329bf60(unaff_x19 + 0x118);
          *(undefined1 *)(unaff_x19 + 0x28) = 1;
        }
      }
    }
    return;
  }
LAB_05ed8e78:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


