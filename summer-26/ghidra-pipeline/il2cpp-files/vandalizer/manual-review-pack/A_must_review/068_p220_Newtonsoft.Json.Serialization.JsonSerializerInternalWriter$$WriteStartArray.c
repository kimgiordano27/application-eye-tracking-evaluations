/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 05dede64
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *unaff_x19;
  ulong unaff_x20;
  long unaff_x25;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long *unaff_x28;
  double dVar13;
  double dVar14;
  int in_stack_00000028;
  int in_stack_00000030;
  long *in_stack_00000080;
  int iStack0000000000000088;
  int iStack000000000000008c;
  byte bStack0000000000000090;
  byte bStack0000000000000091;
  byte bStack0000000000000092;
  byte bStack0000000000000093;
  undefined1 uStack0000000000000094;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  double in_stack_000000b8;
  
                    /* try { // try from 05dede64 to 05eede67 has its CatchHandler @ 05dedf34 */
  plVar9 = *(long **)(unaff_x25 + 0xd28);
  *(undefined8 *)(unaff_x19 + 0xc) = param_1;
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a44f27 == '\0') {
                    /* try { // try from 05dede8c to 05eedefb has its CatchHandler @ 05dedf6c */
    FUN_031f20f4(PTR_DAT_075e7d28);
    DAT_07a44f27 = '\x01';
  }
  lVar7 = *plVar9;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *plVar9;
  }
  if (**(char **)(lVar7 + 0xb8) == '\0') {
    if (in_stack_00000080 == (long *)0x0) {
LAB_05dee454:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    sVar3 = (**(code **)(*in_stack_00000080 + 0x1a8))
                      (in_stack_00000080,*(undefined8 *)(*in_stack_00000080 + 0x1b0));
    if (sVar3 == 8) {
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      puVar1 = PTR_DAT_075ec060;
      lVar7 = *(long *)PTR_DAT_075ec060;
                    /* try { // try from 05dedefc to 05eedf17 has its CatchHandler @ 05ded6cc */
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *(long *)puVar1;
      }
      lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar10 = *(undefined8 *)(*unaff_x28 + 0xb8);
                    /* try { // try from 05dedf18 to 05eedf1b has its CatchHandler @ 05dedf40 */
      if (lVar11 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar7 = *(long *)puVar1;
        }
                    /* try { // try from 05dedf2c to 05eedf57 has its CatchHandler @ 05dedf6c */
                    /* catch() { ... } // from try @ 05dede64 with catch @ 05dedf34 */
        uVar12 = **(undefined8 **)(lVar7 + 0xb8);
                    /* catch() { ... } // from try @ 05dedf18 with catch @ 05dedf40 */
        lVar11 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075ec048);
                    /* try { // try from 05dedf58 to 05eedf63 has its CatchHandler @ 05ded6cc */
        FUN_042cbcbc(lVar11,uVar12,*(undefined8 *)PTR_DAT_075ec058,0);
                    /* try { // try from 05dedf64 to 05eedf6b has its CatchHandler @ 05dedf6c */
                    /* catch() { ... } // from try @ 05deddbc with catch @ 05dedf6c
                       catch() { ... } // from try @ 05dede8c with catch @ 05dedf6c
                       catch() { ... } // from try @ 05dedf2c with catch @ 05dedf6c
                       catch() { ... } // from try @ 05dedf64 with catch @ 05dedf6c */
        plVar9 = (long *)(*(long *)(*(long *)PTR_DAT_075ec060 + 0xb8) + 8);
        *plVar9 = lVar11;
        thunk_FUN_0329bf60(plVar9,lVar11);
      }
      FUN_03e483a8(uVar10,lVar11,*(undefined8 *)PTR_DAT_075ec050);
      lVar7 = *unaff_x28;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar7 = *unaff_x28;
      }
      in_stack_00000098 = **(undefined8 **)(lVar7 + 0xb8);
      thunk_FUN_0329bf60(&stack0x00000098);
      uStack0000000000000094 = 1;
    }
  }
  puVar1 = PTR_DAT_075e8138;
  unaff_x19[5] = -1;
  unaff_x19[3] = -1;
  unaff_x19[4] = -1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_05df7880(&stack0x00000050);
  FUN_05df7880(&stack0x00000020);
  if ((bStack0000000000000093 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    Newtonsoft_Json_Linq_JObject__FromObject(&stack0x00000050,0);
    FUN_05df8ddc(&stack0x00000050,0);
    Newtonsoft_Json_Linq_JObject__FromObject(&stack0x00000020,0);
  }
  if ((unaff_x20 & 1) != 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    FUN_05df8bd8(&stack0x00000050,0);
    FUN_05df8ffc(&stack0x00000050,0);
    FUN_05df8bd8(&stack0x00000020,0);
  }
  while( true ) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar8 = FUN_05df79d8(&stack0x00000050,0);
    if ((uVar8 & 1) == 0) break;
    if ((bStack0000000000000092 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_05df8bd8(&stack0x00000020,0);
    }
    lVar7 = in_stack_000000a8;
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar8 = FUN_05df5b90(&stack0x00000020,&stack0x00000050,&stack0x00000080,lVar7);
    if ((uVar8 & 1) == 0) {
LAB_05dee140:
      uVar4 = 0;
LAB_05dee144:
      return uVar4 & 1;
    }
  }
  if (in_stack_00000030 < in_stack_00000028 + -1) goto LAB_05dee134;
  if ((bStack0000000000000091 & 1) != 0) {
    if (in_stack_000000a8 == 0) goto LAB_05dee454;
    uVar4 = FUN_05d55a58(in_stack_000000a8,0);
    if ((uVar4 >> 3 & 1) == 0) {
      if (99 < *unaff_x19) goto LAB_05dee134;
      if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      iVar5 = (**(code **)(*in_stack_00000080 + 0x318))
                        (in_stack_00000080,*unaff_x19,*(undefined8 *)(*in_stack_00000080 + 800));
      *unaff_x19 = iVar5;
    }
  }
  if ((bStack0000000000000090 & 1) == 0) {
    if (iStack000000000000008c == 1) {
      if (unaff_x19[3] < 0xc) goto LAB_05dee134;
    }
    else if ((iStack000000000000008c == 0) && (0xb < unaff_x19[3])) goto LAB_05dee134;
LAB_05dee234:
    if ((*unaff_x19 == -1) && (unaff_x19[1] == -1)) {
      bVar2 = unaff_x19[2] == -1;
    }
    else {
      bVar2 = false;
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar8 = FUN_05df37b4();
    if ((uVar8 & 1) != 0) {
      if (bVar2) {
LAB_05dee2b0:
        if (in_stack_00000080 == (long *)0x0) goto LAB_05dee454;
        uVar8 = (**(code **)(*in_stack_00000080 + 0x2b8))
                          (in_stack_00000080,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],
                           unaff_x19[4],unaff_x19[5],0);
        if ((uVar8 & 1) != 0) {
          dVar14 = *(double *)(unaff_x19 + 6);
          if (0.0 < dVar14) {
            if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            dVar14 = dVar14 * DAT_014bb9b0;
            dVar13 = modf(dVar14,&stack0x000000b8);
            if (0.0 <= dVar14) {
              if (dVar13 == 0.5) {
                dVar14 = 1.0;
                goto LAB_05dee37c;
              }
              dVar13 = (double)(long)(dVar14 + 0.5);
            }
            else if (dVar13 == -0.5) {
              dVar14 = -1.0;
LAB_05dee37c:
              dVar13 = in_stack_000000b8;
              if (((long)in_stack_000000b8 & 1U) != 0) {
                dVar13 = in_stack_000000b8 + dVar14;
              }
            }
            else {
              dVar13 = (double)(long)(dVar14 + -0.5);
            }
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            lVar7 = -0x8000000000000000;
            if (dVar13 != INFINITY) {
              lVar7 = (long)dVar13;
            }
            uVar10 = FUN_05de1368(unaff_x19 + 0xe,lVar7);
            *(undefined8 *)(unaff_x19 + 0xe) = uVar10;
          }
          iVar5 = iStack0000000000000088;
          if (iStack0000000000000088 != -1) {
            if (in_stack_00000080 == (long *)0x0) goto LAB_05dee454;
            iVar6 = (**(code **)(*in_stack_00000080 + 0x1f8))
                              (in_stack_00000080,*(undefined8 *)(unaff_x19 + 0xe),
                               *(undefined8 *)(*in_stack_00000080 + 0x200));
            if (iVar5 != iVar6) goto LAB_05dee440;
          }
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar4 = FUN_05df3a3c(&stack0x00000020);
          goto LAB_05dee144;
        }
      }
      else {
        if (in_stack_000000a8 == 0) goto LAB_05dee454;
        uVar8 = FUN_05d56fa8(in_stack_000000a8,0);
        if ((uVar8 & 1) == 0) goto LAB_05dee2b0;
        if (in_stack_000000a8 == 0) goto LAB_05dee454;
        uVar8 = FUN_05d56fd0();
        if ((uVar8 & 1) != 0) goto LAB_05dee2b0;
      }
LAB_05dee440:
      FUN_05df972c();
    }
  }
  else {
    if (iStack000000000000008c == -1) {
      iStack000000000000008c = 0;
      iVar5 = unaff_x19[3];
      if (iVar5 < 0xd) goto LAB_05dee22c;
    }
    else {
      iVar5 = unaff_x19[3];
      if (iVar5 < 0xd) {
        if (iStack000000000000008c != 0) {
          if (iVar5 != 0xc) {
            iVar5 = iVar5 + 0xc;
          }
          unaff_x19[3] = iVar5;
          goto LAB_05dee234;
        }
LAB_05dee22c:
        if (iVar5 == 0xc) {
          unaff_x19[3] = 0;
        }
        goto LAB_05dee234;
      }
    }
LAB_05dee134:
    FUN_05df96dc();
  }
  goto LAB_05dee140;
}


