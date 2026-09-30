/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 05dee0f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *unaff_x19;
  long unaff_x21;
  long *unaff_x26;
  long *unaff_x28;
  double dVar8;
  double dVar9;
  int in_stack_00000028;
  int in_stack_00000030;
  long *in_stack_00000080;
  int iStack0000000000000088;
  int iStack000000000000008c;
  byte bStack0000000000000090;
  byte bStack0000000000000091;
  byte bStack0000000000000092;
  long in_stack_000000a8;
  double in_stack_000000b8;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_05df5b90(&stack0x00000020,&stack0x00000050,&stack0x00000080,unaff_x21);
    if ((uVar6 & 1) == 0) goto LAB_05dee140;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_05df79d8(&stack0x00000050,0);
    if ((uVar6 & 1) == 0) break;
    if ((bStack0000000000000092 & 1) != 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_05df8bd8(&stack0x00000020,0);
    }
    param_1 = *unaff_x28;
    unaff_x21 = in_stack_000000a8;
  }
  if (in_stack_00000030 < in_stack_00000028 + -1) goto LAB_05dee134;
  if ((bStack0000000000000091 & 1) != 0) {
    if (in_stack_000000a8 == 0) goto LAB_05dee454;
    uVar3 = FUN_05d55a58(in_stack_000000a8,0);
    if ((uVar3 >> 3 & 1) == 0) {
      if (99 < *unaff_x19) goto LAB_05dee134;
      if (in_stack_00000080 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      iVar4 = (**(code **)(*in_stack_00000080 + 0x318))
                        (in_stack_00000080,*unaff_x19,*(undefined8 *)(*in_stack_00000080 + 800));
      *unaff_x19 = iVar4;
    }
  }
  if ((bStack0000000000000090 & 1) == 0) {
    if (iStack000000000000008c == 1) {
      if (unaff_x19[3] < 0xc) goto LAB_05dee134;
    }
    else if ((iStack000000000000008c == 0) && (0xb < unaff_x19[3])) goto LAB_05dee134;
LAB_05dee234:
    if ((*unaff_x19 == -1) && (unaff_x19[1] == -1)) {
                    /* try { // try from 05dee35c to 05eee35f has its CatchHandler @ 05dee9b8 */
      bVar2 = unaff_x19[2] == -1;
    }
    else {
      bVar2 = false;
    }
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    uVar6 = FUN_05df37b4();
    if ((uVar6 & 1) != 0) {
      if (bVar2) {
LAB_05dee2b0:
        if (in_stack_00000080 == (long *)0x0) goto LAB_05dee454;
        uVar6 = (**(code **)(*in_stack_00000080 + 0x2b8))
                          (in_stack_00000080,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],
                           unaff_x19[4],unaff_x19[5],0);
        if ((uVar6 & 1) != 0) {
          dVar9 = *(double *)(unaff_x19 + 6);
          if (0.0 < dVar9) {
            if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            dVar9 = dVar9 * DAT_014bb9b0;
            dVar8 = modf(dVar9,&stack0x000000b8);
                    /* try { // try from 05dee328 to 05eee333 has its CatchHandler @ 05dee99c */
            if (0.0 <= dVar9) {
              if (dVar8 == 0.5) {
                dVar9 = 1.0;
                goto LAB_05dee37c;
              }
              dVar8 = (double)(long)(dVar9 + 0.5);
            }
            else if (dVar8 == -0.5) {
              dVar9 = -1.0;
LAB_05dee37c:
                    /* try { // try from 05dee37c to 05eee37f has its CatchHandler @ 05dee9d8 */
              dVar8 = in_stack_000000b8;
              if (((long)in_stack_000000b8 & 1U) != 0) {
                dVar8 = in_stack_000000b8 + dVar9;
              }
            }
            else {
                    /* try { // try from 05dee394 to 05eee397 has its CatchHandler @ 05dee9b4 */
              dVar8 = (double)(long)(dVar9 + -0.5);
            }
                    /* try { // try from 05dee3b4 to 05eee3d3 has its CatchHandler @ 05dee9f0 */
            if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            lVar1 = -0x8000000000000000;
            if (dVar8 != INFINITY) {
              lVar1 = (long)dVar8;
            }
            uVar7 = FUN_05de1368(unaff_x19 + 0xe,lVar1);
            *(undefined8 *)(unaff_x19 + 0xe) = uVar7;
          }
          iVar4 = iStack0000000000000088;
          if (iStack0000000000000088 != -1) {
            if (in_stack_00000080 == (long *)0x0) {
LAB_05dee454:
                    /* WARNING: Subroutine does not return */
              FUN_031f2390();
            }
            iVar5 = (**(code **)(*in_stack_00000080 + 0x1f8))
                              (in_stack_00000080,*(undefined8 *)(unaff_x19 + 0xe),
                               *(undefined8 *)(*in_stack_00000080 + 0x200));
            if (iVar4 != iVar5) goto LAB_05dee440;
          }
                    /* try { // try from 05dee40c to 05eee433 has its CatchHandler @ 05dee9e4 */
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          uVar3 = FUN_05df3a3c(&stack0x00000020);
          goto LAB_05dee144;
        }
      }
      else {
        if (in_stack_000000a8 == 0) goto LAB_05dee454;
        uVar6 = FUN_05d56fa8(in_stack_000000a8,0);
        if ((uVar6 & 1) == 0) goto LAB_05dee2b0;
        if (in_stack_000000a8 == 0) goto LAB_05dee454;
        uVar6 = FUN_05d56fd0();
        if ((uVar6 & 1) != 0) goto LAB_05dee2b0;
      }
LAB_05dee440:
      FUN_05df972c();
    }
  }
  else {
    if (iStack000000000000008c == -1) {
      iStack000000000000008c = 0;
      iVar4 = unaff_x19[3];
      if (iVar4 < 0xd) goto LAB_05dee22c;
    }
    else {
      iVar4 = unaff_x19[3];
                    /* try { // try from 05dee1e4 to 05eee327 has its CatchHandler @ 05dee1e4
                       catch() { ... } // from try @ 05dee1e4 with catch @ 05dee1e4
                       catch() { ... } // from try @ 05dee77c with catch @ 05dee1e4
                       catch() { ... } // from try @ 05dee8a4 with catch @ 05dee1e4
                       catch() { ... } // from try @ 05dee904 with catch @ 05dee1e4
                       catch() { ... } // from try @ 05dee984 with catch @ 05dee1e4
                       catch() { ... } // from try @ 05deea30 with catch @ 05dee1e4 */
      if (iVar4 < 0xd) {
        if (iStack000000000000008c != 0) {
          if (iVar4 != 0xc) {
            iVar4 = iVar4 + 0xc;
          }
          unaff_x19[3] = iVar4;
          goto LAB_05dee234;
        }
LAB_05dee22c:
        if (iVar4 == 0xc) {
          unaff_x19[3] = 0;
        }
        goto LAB_05dee234;
      }
    }
LAB_05dee134:
    FUN_05df96dc();
  }
LAB_05dee140:
  uVar3 = 0;
LAB_05dee144:
  return uVar3 & 1;
}


