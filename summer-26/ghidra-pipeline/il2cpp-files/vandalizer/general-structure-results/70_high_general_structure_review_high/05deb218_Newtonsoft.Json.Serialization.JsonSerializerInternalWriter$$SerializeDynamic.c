/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 05deb218
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  long in_x9;
  long unaff_x19;
  long *plVar14;
  undefined8 uVar15;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  double dVar16;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
  do {
    puVar3 = PTR_DAT_075e8180;
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deb178 with catch @ 05deb218
                        */
    if (!(bool)in_ZR) {
      in_x9 = param_1;
    }
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deb1bc with catch @ 05deb21c
                        */
    lVar9 = 0;
    if (in_x9 != 0) {
      lVar9 = unaff_x19 / in_x9;
    }
    iVar6 = (int)lVar9;
    if (unaff_w29 == 0x66) {
                    /* try { // try from 05deb234 to 05eeb237 has its CatchHandler @ 05deb258 */
                    /* try { // try from 05deb238 to 05eeb25f has its CatchHandler @ 05deb0d4 */
      lVar9 = *(long *)PTR_DAT_075e8180;
      iStack000000000000002c = iVar6;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar9 = *(long *)puVar3;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
                    /* catch() { ... } // from try @ 05deb234 with catch @ 05deb258 */
      if (lVar9 == 0) goto LAB_05debc7c;
                    /* try { // try from 05deb260 to 05eeb267 has its CatchHandler @ 05deb27c */
                    /* try { // try from 05deb268 to 05eeb273 has its CatchHandler @ 05deb0d4 */
      if (*(uint *)(lVar9 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_05debc78:
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
                    /* try { // try from 05deb274 to 05eeb27b has its CatchHandler @ 05deb27c */
      lVar9 = lVar9 + (long)(int)(iStack0000000000000034 - 1U) * 8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05deb260 with catch @ 05deb27c
                       catch(type#2 @ 00000000) { ... } // from try @ 05deb274 with catch @ 05deb27c
                        */
      lVar10 = *(long *)PTR_DAT_0759d328;
LAB_05debb00:
      uVar15 = *(undefined8 *)(lVar9 + 0x20);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar12 = FUN_05d860e8(0);
      FUN_05dff00c((long)&stack0x00000028 + 4,uVar15,uVar12,0);
      if (unaff_x25 == 0) {
LAB_05debc7c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05c94b84();
      plVar14 = (long *)PTR_DAT_075e8180;
    }
    else {
      iVar7 = iStack0000000000000034;
      if ((0 < iStack0000000000000034) && (iVar13 = iStack0000000000000034, iVar6 % 10 == 0)) {
        do {
          lVar9 = SUB168(SEXT816(lVar9) * SEXT816(unaff_x27),8);
          lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
          iVar7 = iVar13 + -1;
          if (iVar13 < 2) break;
          lVar10 = SUB168(SEXT816(lVar9) * SEXT816(unaff_x27),8);
          iVar13 = iVar7;
        } while (lVar9 == ((lVar10 >> 2) - (lVar10 >> 0x3f)) * 10);
      }
      if (0 < iVar7) {
        iStack000000000000002c = (int)lVar9;
        lVar9 = *(long *)PTR_DAT_075e8180;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar9 = *(long *)puVar3;
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x28);
        if (lVar9 == 0) goto LAB_05debc7c;
        if (*(uint *)(lVar9 + 0x18) <= iVar7 - 1U) goto LAB_05debc78;
        lVar9 = lVar9 + (ulong)(iVar7 - 1U) * 8;
        lVar10 = *(long *)PTR_DAT_0759d328;
        goto LAB_05debb00;
      }
      if (unaff_x25 == 0) goto LAB_05debc7c;
      iVar6 = FUN_05c93cd4();
      plVar14 = (long *)PTR_DAT_075e8180;
      if (0 < iVar6) {
        FUN_05c93cd4();
        sVar5 = FUN_05c94608();
        if (sVar5 == 0x2e) {
          FUN_05c93cd4();
          FUN_05c95754();
        }
      }
    }
LAB_05debc1c:
    unaff_w28 = iStack0000000000000034 + unaff_w28;
    if ((int)unaff_w22 <= (int)unaff_w28) {
      return;
    }
    if (unaff_w22 <= unaff_w28) goto LAB_05debc78;
    uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
    unaff_w29 = (uint)uVar2;
    if (0x4b < uVar2) {
      if (0x6d < uVar2) {
        if (0x74 < uVar2) {
          if (uVar2 != 0x79) {
            if (uVar2 != 0x7a) goto switchD_05deaff0_caseD_65;
            if (*(int *)(*plVar14 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            iStack0000000000000034 = FUN_05dea680();
            FUN_05debcd8(in_stack_00000018,unaff_x20);
            goto LAB_05debc1c;
          }
          if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
          iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar14);
          }
          iStack0000000000000034 = FUN_05dea680();
          if (((((in_stack_00000010 & 1) == 0) &&
               (*(char *)(*(long *)(*(long *)PTR_DAT_075e4a08 + 0xb8) + 2) == '\0')) &&
              (iStack0000000000000030 == 1)) &&
             (uVar1 = iStack0000000000000034 + unaff_w28, (int)uVar1 < in_stack_00000008._4_4_)) {
            if (unaff_w22 <= uVar1) goto LAB_05debc78;
            if (*(short *)(unaff_x23 + (long)(int)uVar1 * 2) == 0x27) {
              if (unaff_w22 <= uVar1 + 1) goto LAB_05debc78;
              if (*(long *)PTR_DAT_075e8118 == 0) goto LAB_05debc7c;
              sVar5 = *(short *)(unaff_x23 + (long)(int)(uVar1 + 1) * 2);
              sVar4 = FUN_05c829ac(*(long *)PTR_DAT_075e8118,0,0);
              plVar14 = (long *)PTR_DAT_075e8180;
              if (sVar5 == sVar4) {
                if ((*(long *)PTR_DAT_075e8110 == 0) ||
                   (FUN_05c829ac(*(long *)PTR_DAT_075e8110,0,0), unaff_x25 == 0)) goto LAB_05debc7c;
                FUN_05c95a6c();
                goto LAB_05debc1c;
              }
            }
          }
          uVar11 = FUN_05d56f74();
          if ((uVar11 & 1) == 0) {
            if ((in_stack_00000010 & 0x100000000) == 0) {
              if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              if (DAT_07a44f27 == '\0') {
                FUN_031f20f4(PTR_DAT_075e7d28);
                DAT_07a44f27 = '\x01';
              }
                    /* try { // try from 05deb888 to 05eeb88f has its CatchHandler @ 05deb948 */
              puVar3 = PTR_DAT_075e7d28;
              lVar9 = *(long *)PTR_DAT_075e7d28;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* try { // try from 05deb89c to 05eeb89f has its CatchHandler @ 05deb944 */
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar9 = *(long *)puVar3;
              }
              if (**(char **)(lVar9 + 0xb8) == '\0') {
                if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
                  Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                }
                FUN_05dea604();
                plVar14 = (long *)PTR_DAT_075e8180;
                goto LAB_05debc1c;
              }
            }
            if (2 < iStack0000000000000034) {
              uVar15 = FUN_05dfee30((long)&stack0x00000030 + 4,0);
                    /* try { // try from 05deb8d8 to 05eeb90b has its CatchHandler @ 05deb940 */
              uVar15 = FUN_05c7e0d4(*(undefined8 *)PTR_DAT_075e4218,uVar15,0);
              if (*(int *)(*(long *)PTR_DAT_0759d328 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                          (*(long *)PTR_DAT_0759d328);
              }
                    /* try { // try from 05deb90c to 05eeb95f has its CatchHandler @ 05deb7a8 */
              uVar12 = FUN_05d860e8(0);
              FUN_05dff00c(&stack0x00000030,uVar15,uVar12,0);
              goto joined_r0x05deb928;
            }
            if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
          }
          else if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
LAB_05debaa4:
          FUN_05dea49c();
          plVar14 = (long *)PTR_DAT_075e8180;
          goto LAB_05debc1c;
        }
        if (uVar2 == 0x73) {
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack0000000000000034 = FUN_05dea680();
          if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_0759c258);
          }
          FUN_05de2e54(&stack0x00000038);
          goto LAB_05deb7a8;
        }
        if (uVar2 != 0x74) goto switchD_05deaff0_caseD_65;
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar6 = FUN_05dea680();
        iStack0000000000000034 = iVar6;
        if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_0759c258);
        }
        iVar7 = FUN_05de2a6c(&stack0x00000038);
        plVar14 = (long *)PTR_DAT_075e8180;
        if (iVar6 != 1) {
          if (iVar7 < 0xc) {
            FUN_05d54b34();
          }
          else {
            FUN_05d5522c();
          }
          if (unaff_x25 != 0) goto LAB_05deb984;
          goto LAB_05debc7c;
        }
        if (iVar7 < 0xc) {
          lVar9 = FUN_05d54b34();
          if (lVar9 != 0) break;
          goto LAB_05debc7c;
        }
        lVar9 = FUN_05d5522c();
        if (lVar9 == 0) goto LAB_05debc7c;
        if (0 < *(int *)(lVar9 + 0x10)) {
          lVar9 = FUN_05d5522c();
          goto joined_r0x05deb950;
        }
        goto LAB_05debc1c;
      }
      if (0x5c < uVar2) {
        switch(uVar2) {
        case 100:
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack0000000000000034 = FUN_05dea680();
          if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
          if (2 < iStack0000000000000034) {
            uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
            iVar6 = iStack0000000000000034;
            if (*(int *)(*plVar14 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar14);
            }
            Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                      (uVar8,iVar6);
            if (unaff_x25 == 0) goto LAB_05debc7c;
LAB_05debc00:
            FUN_05c94b84();
            plVar14 = (long *)PTR_DAT_075e8180;
            break;
          }
                    /* try { // try from 05deb994 to 05eeb99f has its CatchHandler @ 05deb7a8 */
                    /* try { // try from 05deb9a0 to 05eeb9a7 has its CatchHandler @ 05deb9a8 */
          (**(code **)(*unaff_x26 + 0x1e8))();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05deb98c with catch @ 05deb9a8
                       catch(type#2 @ 00000000) { ... } // from try @ 05deb9a0 with catch @ 05deb9a8
                        */
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            if (DAT_07a44f27 == '\0') {
              FUN_031f20f4(PTR_DAT_075e7d28);
              DAT_07a44f27 = '\x01';
            }
            puVar3 = PTR_DAT_075e7d28;
            lVar9 = *(long *)PTR_DAT_075e7d28;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar9 = *(long *)puVar3;
            }
            plVar14 = (long *)PTR_DAT_075e8180;
            if (**(char **)(lVar9 + 0xb8) == '\0') {
LAB_05debbb0:
              plVar14 = (long *)PTR_DAT_075e8180;
              if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_05dea604();
              break;
            }
          }
          lVar9 = *plVar14;
LAB_05deba24:
          if (*(int *)(lVar9 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          goto LAB_05debaa4;
        default:
          goto switchD_05deaff0_caseD_65;
        case 0x66:
          goto switchD_05deaff0_caseD_66;
        case 0x67:
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack0000000000000034 = FUN_05dea680();
          if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
          (**(code **)(*unaff_x26 + 0x228))();
          FUN_05d54cf4();
          if (unaff_x25 == 0) goto LAB_05debc7c;
LAB_05deb984:
                    /* catch() { ... } // from try @ 05deb960 with catch @ 05deb984 */
                    /* try { // try from 05deb98c to 05eeb993 has its CatchHandler @ 05deb9a8 */
          FUN_05c94b84();
          break;
        case 0x68:
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack0000000000000034 = FUN_05dea680();
          if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_0759c258);
          }
          FUN_05de2a6c(&stack0x00000038);
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_05dea49c();
          plVar14 = (long *)PTR_DAT_075e8180;
          break;
        case 0x6d:
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack0000000000000034 = FUN_05dea680();
          if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                      (*(long *)PTR_DAT_0759c258);
          }
          FUN_05de2be8(&stack0x00000038);
LAB_05deb7a8:
                    /* try { // try from 05deb7a8 to 05eeb887 has its CatchHandler @ 05deb7a8
                       catch() { ... } // from try @ 05deb7a8 with catch @ 05deb7a8
                       catch() { ... } // from try @ 05deb90c with catch @ 05deb7a8
                       catch() { ... } // from try @ 05deb964 with catch @ 05deb7a8
                       catch() { ... } // from try @ 05deb994 with catch @ 05deb7a8 */
          FUN_05dea49c();
        }
        goto LAB_05debc1c;
      }
      if (uVar2 == 0x4d) {
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iStack0000000000000034 = FUN_05dea680();
        if (unaff_x26 != (long *)0x0) {
          uVar8 = (**(code **)(*unaff_x26 + 0x248))();
          if (iStack0000000000000034 < 3) {
            if ((in_stack_00000010 & 0x100000000) == 0) {
              if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              if (DAT_07a44f27 == '\0') {
                FUN_031f20f4(PTR_DAT_075e7d28);
                DAT_07a44f27 = '\x01';
              }
              puVar3 = PTR_DAT_075e7d28;
              lVar9 = *(long *)PTR_DAT_075e7d28;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                lVar9 = *(long *)puVar3;
              }
              if (**(char **)(lVar9 + 0xb8) == '\0') goto LAB_05debbb0;
            }
            lVar9 = *(long *)PTR_DAT_075e8180;
            goto LAB_05deba24;
          }
          if ((in_stack_00000010 & 0x100000000) == 0) {
            if (*(int *)(*(long *)PTR_DAT_075e7d28 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
            if (DAT_07a44f27 == '\0') {
              FUN_031f20f4(PTR_DAT_075e7d28);
              DAT_07a44f27 = '\x01';
            }
            puVar3 = PTR_DAT_075e7d28;
            lVar9 = *(long *)PTR_DAT_075e7d28;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              lVar9 = *(long *)puVar3;
            }
            iVar6 = iStack0000000000000034;
            if (**(char **)(lVar9 + 0xb8) == '\0') {
              if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
                Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
              }
              FUN_05dea770(in_stack_00000018,uVar8,iVar6);
              goto joined_r0x05deb928;
            }
          }
          puVar3 = PTR_DAT_075e8180;
          uVar11 = FUN_05d55a58();
          iVar6 = iStack0000000000000034;
          lVar9 = *(long *)puVar3;
          if (((uVar11 & 1) == 0) || (iStack0000000000000034 < 4)) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar9);
            }
            FUN_05dea73c(uVar8,iVar6);
          }
          else {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar9);
            }
            FUN_05deaa48();
            FUN_05d55a98();
          }
joined_r0x05deb928:
          if (unaff_x25 != 0) goto LAB_05debc00;
        }
        goto LAB_05debc7c;
      }
      if (uVar2 == 0x5c) {
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar6 = FUN_05dea9d8();
        if (-1 < iVar6) {
          if (unaff_x25 != 0) {
            FUN_05c95a6c();
            goto LAB_05deaed4;
          }
          goto LAB_05debc7c;
        }
        goto LAB_05debc80;
      }
switchD_05deaff0_caseD_65:
      if (unaff_x25 == 0) goto LAB_05debc7c;
      FUN_05c95a6c();
LAB_05deb3dc:
      iStack0000000000000034 = 1;
      goto LAB_05debc1c;
    }
    if (uVar2 < 0x30) {
      if (uVar2 < 0x26) {
        if (uVar2 == 0x22) {
LAB_05deb11c:
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iStack0000000000000034 = FUN_05dea830();
          goto LAB_05debc1c;
        }
        if (uVar2 == 0x25) {
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iVar6 = FUN_05dea9d8();
          if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_05debc80;
          uStack0000000000000028 = (undefined2)iVar6;
          if (*(long *)(*(long *)PTR_DAT_075ebfd8 + 0x38) == 0) {
            FUN_0322bf50(*(long *)PTR_DAT_075ebfd8);
          }
          if (*(int *)(*plVar14 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_05deaba0(in_stack_00000018,&stack0x00000028,1);
LAB_05deaed4:
          iStack0000000000000034 = 2;
          goto LAB_05debc1c;
        }
      }
      else {
        if (uVar2 == 0x27) goto LAB_05deb11c;
        if (uVar2 == 0x2f) {
          FUN_05d54f84();
          if (unaff_x25 != 0) goto LAB_05deb3cc;
          goto LAB_05debc7c;
        }
      }
      goto switchD_05deaff0_caseD_65;
    }
    if (0x46 < uVar2) {
      if (uVar2 == 0x48) {
        if (*(int *)(*plVar14 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iStack0000000000000034 = FUN_05dea680();
        if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_0759c258);
        }
        FUN_05de2a6c(&stack0x00000038);
        goto LAB_05deb7a8;
      }
      if (uVar2 != 0x4b) goto switchD_05deaff0_caseD_65;
      iStack0000000000000034 = 1;
      if (*(int *)(*plVar14 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_05dec078(in_stack_00000018,unaff_x20);
      goto LAB_05debc1c;
    }
    if (uVar2 == 0x3a) {
      FUN_05d556ec();
      if (unaff_x25 == 0) goto LAB_05debc7c;
LAB_05deb3cc:
      FUN_05c94b84();
      goto LAB_05deb3dc;
    }
    if (uVar2 != 0x46) goto switchD_05deaff0_caseD_65;
switchD_05deaff0_caseD_66:
    if (*(int *)(*plVar14 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    iStack0000000000000034 = FUN_05dea680();
    if (7 < iStack0000000000000034) {
LAB_05debc80:
      if (in_stack_00000000 == 0) {
        FUN_05c97604();
      }
      thunk_FUN_03257e30(PTR_DAT_0759d4c0);
      uVar15 = thunk_FUN_0322f148();
      uVar12 = thunk_FUN_03257e30(PTR_DAT_075e3588);
      FUN_05dea0e8(uVar15,uVar12);
      uVar12 = thunk_FUN_03257e30(PTR_DAT_075ebfe0);
                    /* WARNING: Subroutine does not return */
      FUN_031f225c(uVar15,uVar12);
    }
    if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar9 = FUN_05ddf7e0(&stack0x00000038);
    iVar6 = iStack0000000000000034;
    if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)PTR_DAT_0759b370);
    }
    unaff_x19 = lVar9 % 10000000;
    dVar16 = (double)thunk_FUN_0322bbc4(0x4024000000000000,(double)(7 - iVar6),0);
    param_1 = (long)dVar16;
    in_ZR = dVar16 == INFINITY;
    in_x9 = -0x8000000000000000;
  } while( true );
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deb8d8 with catch @ 05deb940
                        */
  if (0 < *(int *)(lVar9 + 0x10)) {
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deb89c with catch @ 05deb944
                        */
                    /* catch(type#1 @ 0718d318) { ... } // from try @ 05deb888 with catch @ 05deb948
                        */
    lVar9 = FUN_05d54b34();
joined_r0x05deb950:
                    /* try { // try from 05deb960 to 05eeb963 has its CatchHandler @ 05deb984 */
    if ((lVar9 == 0) || (FUN_05c829ac(lVar9,0,0), unaff_x25 == 0)) goto LAB_05debc7c;
                    /* try { // try from 05deb964 to 05eeb98b has its CatchHandler @ 05deb7a8 */
    FUN_05c95a6c();
  }
  goto LAB_05debc1c;
}


