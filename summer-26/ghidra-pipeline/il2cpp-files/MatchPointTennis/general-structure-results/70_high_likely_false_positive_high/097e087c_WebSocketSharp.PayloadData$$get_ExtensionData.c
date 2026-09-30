/*
FUNCTION_NAME: WebSocketSharp.PayloadData$$get_ExtensionData
ENTRY_POINT: 097e087c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void WebSocketSharp_PayloadData__get_ExtensionData(void)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *unaff_x19;
  undefined1 (*pauVar11) [16];
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined1 auVar12 [16];
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000048;
  
  FUN_04447ba8(
              DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
              );
  FUN_04447ba8(
              DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_56_var
              );
                    /* try { // try from 097e0894 to 098e08ab has its CatchHandler @ 097e0668 */
  FUN_04447ba8(
              DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
              );
  FUN_04447ba8(
              DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
              );
                    /* try { // try from 097e08ac to 098e08b3 has its CatchHandler @ 097e08b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 097e0860 with catch @ 097e08b4
                       catch(type#2 @ 00000000) { ... } // from try @ 097e08ac with catch @ 097e08b4
                        */
  FUN_04447ba8(System_Buffers_ArrayPool<Quaternion>_TypeInfo);
  FUN_04447ba8(System_Func<string,_Dropdown_OptionData>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0xd63) = 1;
  puVar3 = 
  DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
  ;
  iVar2 = *unaff_x19;
  if (unaff_x19[1] == 4) {
    FUN_097da438();
    goto LAB_097e08e8;
  }
  pfVar1 = (float *)(unaff_x19 + 2);
  if (iVar2 < 0x20021) {
    switch(iVar2) {
    case 0x20000:
      piVar4 = (int *)FUN_0676de24(unaff_x20 + 8,
                                   *(undefined8 *)
                                    DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                                  );
      iVar2 = -0x80000000;
      if ((float)unaff_x19[2] != INFINITY) {
        iVar2 = (int)(float)unaff_x19[2];
      }
      *piVar4 = iVar2;
      if (unaff_x19[1] == 2) {
        puVar5 = (undefined4 *)FUN_0676de24(unaff_x20 + 8,*(undefined8 *)puVar3);
        *puVar5 = 0;
      }
      break;
    case 0x20001:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      iVar2 = -0x80000000;
      if ((float)unaff_x19[2] != INFINITY) {
        iVar2 = (int)(float)unaff_x19[2];
      }
      *(int *)(lVar8 + 4) = iVar2;
      if (unaff_x19[1] == 2) {
        lVar8 = FUN_0676de24(unaff_x20 + 8,*(undefined8 *)puVar3);
        *(undefined4 *)(lVar8 + 4) = 0;
      }
      break;
    case 0x20002:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      iVar2 = -0x80000000;
      if ((float)unaff_x19[2] != INFINITY) {
        iVar2 = (int)(float)unaff_x19[2];
      }
      *(int *)(lVar8 + 8) = iVar2;
      if (unaff_x19[1] == 2) {
        lVar8 = FUN_0676de24(unaff_x20 + 8,*(undefined8 *)puVar3);
        *(undefined4 *)(lVar8 + 8) = 0;
      }
      break;
    case 0x20003:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(float *)(lVar8 + 0xc) = *pfVar1;
      break;
    case 0x20004:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(float *)(lVar8 + 0x10) = *pfVar1;
      break;
    case 0x20005:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(float *)(lVar8 + 0x14) = *pfVar1;
      break;
    case 0x20006:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(float *)(lVar8 + 0x18) = *pfVar1;
      break;
    case 0x20007:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20008:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      iVar2 = -0x80000000;
      if ((float)unaff_x19[2] != INFINITY) {
        iVar2 = (int)(float)unaff_x19[2];
      }
      *(int *)(lVar8 + 0x24) = iVar2;
      if (unaff_x19[1] == 3) {
        lVar8 = FUN_0676de24(unaff_x20 + 8,*(undefined8 *)puVar3);
        *(undefined4 *)(lVar8 + 0x24) = 1;
      }
      break;
    case 0x20009:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2000a:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
LAB_097e1440:
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x30) = iVar2;
      break;
    case 0x2000b:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(float *)(lVar8 + 0x34) = *pfVar1;
      break;
    case 0x2000c:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(float *)(lVar8 + 0x38) = *pfVar1;
      break;
    case 0x2000d:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
LAB_097e1478:
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x3c) = iVar2;
      break;
    case 0x2000e:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2000f:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x48) = iVar2;
      break;
    case 0x20010:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x4c) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20011:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x54) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20012:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
LAB_097e14d0:
      *(undefined8 *)(lVar8 + 0x5c) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20013:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 100) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20014:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x6c) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20015:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      goto LAB_097e1530;
    case 0x20016:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      goto LAB_097e1550;
    case 0x20017:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x84) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20018:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x8c) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20019:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x94) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2001a:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0x9c) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2001b:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0xa4) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2001c:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0xac) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2001d:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0xb4) = iVar2;
      break;
    case 0x2001e:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0xb8) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x2001f:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(unaff_x19 + 2);
      break;
    case 0x20020:
      lVar8 = FUN_0676de24(unaff_x20 + 8,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_48_var
                          );
      *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(unaff_x19 + 2);
      break;
    default:
      switch(iVar2) {
      case 0x10000:
        puVar7 = (undefined8 *)FUN_0676d964();
        goto LAB_097e0a70;
      case 0x10001:
        lVar8 = FUN_0676d964();
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(unaff_x19 + 2);
        break;
      case 0x10002:
        lVar8 = FUN_0676d964();
        *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(unaff_x19 + 2);
        break;
      default:
        goto switchD_097e0940_caseD_70005;
      case 0x10004:
        lVar8 = FUN_0676d964();
        goto LAB_097e1478;
      case 0x10005:
        lVar8 = FUN_0676d964();
        uVar10 = *(ulong *)pfVar1;
        if (uVar10 == 0) {
WebSocketSharp_Logger__defaultOutput:
          plVar9 = (long *)0x0;
        }
        else {
          if ((uVar10 & 1) == 0) {
            plVar9 = (long *)FUN_07a89d88();
            plVar9 = (long *)*plVar9;
          }
          else {
            plVar9 = (long *)thunk_FUN_044496a8(uVar10,0);
          }
          if (plVar9 == (long *)0x0) goto WebSocketSharp_Logger__defaultOutput;
          if (*plVar9 != *(long *)PTR_DAT_09f20140) {
            plVar9 = (long *)0x0;
          }
        }
        pauVar11 = (undefined1 (*) [16])(lVar8 + 0x40);
        *(long **)*pauVar11 = plVar9;
        goto LAB_097e16c4;
      case 0x10006:
        lVar8 = FUN_0676d964();
        uVar10 = *(ulong *)pfVar1;
        if (uVar10 == 0) {
          auVar12 = ZEXT816(0);
        }
        else {
          if ((uVar10 & 1) == 0) {
            puVar7 = (undefined8 *)FUN_07a89d88();
            uVar6 = *puVar7;
          }
          else {
            uVar6 = thunk_FUN_044496a8(uVar10,0);
          }
          auVar12 = FUN_097fc70c(uVar6,0);
        }
        pauVar11 = (undefined1 (*) [16])(lVar8 + 0x48);
        *pauVar11 = auVar12;
        goto LAB_097e16c0;
      case 0x10007:
        lVar8 = FUN_0676d964();
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 0x58) = iVar2;
        break;
      case 0x10008:
        lVar8 = FUN_0676d964();
        goto LAB_097e14d0;
      case 0x10009:
        lVar8 = FUN_0676d964();
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 100) = iVar2;
        break;
      case 0x1000a:
        lVar8 = FUN_0676d964();
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 0x68) = iVar2;
        break;
      case 0x1000b:
        lVar8 = FUN_0676d964();
        in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
        in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
        in_stack_00000020 = *(undefined8 *)unaff_x19;
        *(undefined8 *)(lVar8 + 0x74) = in_stack_00000030;
        *(undefined8 *)(lVar8 + 0x6c) = in_stack_00000028;
        break;
      case 0x1000c:
        lVar8 = FUN_0676d964();
        *(float *)(lVar8 + 0x7c) = *pfVar1;
        break;
      case 0x1000d:
        lVar8 = FUN_0676d964();
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 0x80) = iVar2;
        break;
      case 0x1000e:
        lVar8 = FUN_0676d964();
        iVar2 = -0x80000000;
        if (*pfVar1 != INFINITY) {
          iVar2 = (int)*pfVar1;
        }
        *(int *)(lVar8 + 0x84) = iVar2;
        break;
      case 0x1000f:
        lVar8 = FUN_0676d964();
        *(undefined8 *)(lVar8 + 0x88) = *(undefined8 *)(unaff_x19 + 2);
      }
    }
    goto LAB_097e08e8;
  }
  switch(iVar2) {
  case 0x70000:
    puVar7 = (undefined8 *)
             FUN_0676f11c(unaff_x20 + 0x28,
                          *(undefined8 *)
                           DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                         );
LAB_097e0a70:
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    puVar7[1] = in_stack_00000030;
    *puVar7 = in_stack_00000028;
    break;
  case 0x70001:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    uVar10 = *(ulong *)pfVar1;
    if (uVar10 == 0) {
      uStack0000000000000008 = 0;
      uStack0000000000000000 = 0;
      uStack0000000000000018 = 0;
      uStack0000000000000010 = 0;
    }
    else {
      if ((uVar10 & 1) == 0) {
        puVar7 = (undefined8 *)FUN_07a89d88();
        uVar6 = *puVar7;
      }
      else {
        uVar6 = thunk_FUN_044496a8(uVar10,0);
      }
      FUN_097f98a4(&stack0x00000020,uVar6,0);
      uStack0000000000000008 = in_stack_00000028;
      uStack0000000000000000 = in_stack_00000020;
      uStack0000000000000018 = in_stack_00000038;
      uStack0000000000000010 = in_stack_00000030;
    }
    pauVar11 = (undefined1 (*) [16])(lVar8 + 0x10);
    *(undefined8 *)(lVar8 + 0x18) = uStack0000000000000008;
    *(undefined8 *)(lVar8 + 0x10) = uStack0000000000000000;
    *(undefined8 *)(lVar8 + 0x28) = uStack0000000000000018;
    *(undefined8 *)(lVar8 + 0x20) = uStack0000000000000010;
LAB_097e16c0:
    plVar9 = (long *)0x0;
LAB_097e16c4:
    thunk_FUN_044bb4b4(pauVar11,plVar9);
    break;
  case 0x70002:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    *(int *)(lVar8 + 0x38) = (int)in_stack_00000030;
    *(undefined8 *)(lVar8 + 0x30) = in_stack_00000028;
    break;
  case 0x70003:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    *(int *)(lVar8 + 0x44) = (int)in_stack_00000030;
    *(undefined8 *)(lVar8 + 0x3c) = in_stack_00000028;
    break;
  case 0x70004:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(unaff_x19 + 2);
    break;
  case 0x70005:
switchD_097e0940_caseD_70005:
    in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,iVar2);
    uVar6 = thunk_FUN_04484e3c(*(undefined8 *)System_Buffers_ArrayPool<Quaternion>_TypeInfo,
                               &stack0x00000020);
    uVar6 = FUN_078ab14c(*(undefined8 *)System_Func<string,_Dropdown_OptionData>_TypeInfo,uVar6,0);
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
    }
    FUN_094c7534(uVar6,0);
    break;
  case 0x70006:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    *(undefined8 *)(lVar8 + 0x6c) = in_stack_00000030;
    *(undefined8 *)(lVar8 + 100) = in_stack_00000028;
    break;
  case 0x70007:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
LAB_097e1530:
    *(undefined8 *)(lVar8 + 0x74) = *(undefined8 *)(unaff_x19 + 2);
    break;
  case 0x70008:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
LAB_097e1550:
    *(undefined8 *)(lVar8 + 0x7c) = *(undefined8 *)(unaff_x19 + 2);
    break;
  case 0x70009:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    *(undefined8 *)(lVar8 + 0x8c) = in_stack_00000030;
    *(undefined8 *)(lVar8 + 0x84) = in_stack_00000028;
    break;
  case 0x7000a:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    *(undefined8 *)(lVar8 + 0x9c) = in_stack_00000030;
    *(undefined8 *)(lVar8 + 0x94) = in_stack_00000028;
    break;
  case 0x7000b:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
    in_stack_00000020 = *(undefined8 *)unaff_x19;
    *(undefined8 *)(lVar8 + 0xac) = in_stack_00000030;
    *(undefined8 *)(lVar8 + 0xa4) = in_stack_00000028;
    break;
  case 0x7000c:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    *(undefined8 *)(lVar8 + 0xb4) = *(undefined8 *)(unaff_x19 + 2);
    break;
  case 0x7000d:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    *(undefined8 *)(lVar8 + 0xbc) = *(undefined8 *)(unaff_x19 + 2);
    break;
  case 0x7000e:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    *(float *)(lVar8 + 0xc4) = *pfVar1;
    break;
  case 0x7000f:
    lVar8 = FUN_0676f11c(unaff_x20 + 0x28,
                         *(undefined8 *)
                          DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_52_var
                        );
    iVar2 = -0x80000000;
    if (*pfVar1 != INFINITY) {
      iVar2 = (int)*pfVar1;
    }
    *(int *)(lVar8 + 200) = iVar2;
    break;
  default:
    switch(iVar2) {
    case 0x30001:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x18) = iVar2;
      break;
    case 0x30002:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      in_stack_00000030 = *(undefined8 *)(unaff_x19 + 4);
      in_stack_00000028 = *(undefined8 *)(unaff_x19 + 2);
      in_stack_00000020 = *(undefined8 *)unaff_x19;
      *(undefined8 *)(lVar8 + 0x24) = in_stack_00000030;
      *(undefined8 *)(lVar8 + 0x1c) = in_stack_00000028;
      break;
    case 0x30003:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x2c) = iVar2;
      break;
    case 0x30004:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      goto LAB_097e1440;
    case 0x30005:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x34) = iVar2;
      break;
    case 0x30006:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x38) = iVar2;
      break;
    case 0x30007:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      *(float *)(lVar8 + 0x3c) = *pfVar1;
      break;
    case 0x30008:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x40) = iVar2;
      break;
    case 0x30009:
      lVar8 = FUN_0676e2e4(unaff_x20 + 0x10,
                           *(undefined8 *)
                            DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_60_var
                          );
      iVar2 = -0x80000000;
      if (*pfVar1 != INFINITY) {
        iVar2 = (int)*pfVar1;
      }
      *(int *)(lVar8 + 0x44) = iVar2;
      break;
    default:
      goto switchD_097e0940_caseD_70005;
    }
  }
LAB_097e08e8:
  if (*(long *)(unaff_x21 + 0x28) == in_stack_00000048) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


