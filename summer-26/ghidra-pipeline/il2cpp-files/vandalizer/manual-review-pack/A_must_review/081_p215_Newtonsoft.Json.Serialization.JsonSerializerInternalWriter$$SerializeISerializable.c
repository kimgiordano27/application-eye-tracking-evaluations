/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeISerializable
ENTRY_POINT: 05deb9b4
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeISerializable
               (undefined **param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  undefined8 unaff_x20;
  uint unaff_w22;
  long unaff_x23;
  undefined8 unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  uint unaff_w28;
  double dVar17;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000028;
  int iStack000000000000002c;
  int iStack0000000000000030;
  int iStack0000000000000034;
  
code_r0x05deb9b4:
                    /* try { // try from 05deb9b4 to 05eebb63 has its CatchHandler @ 05deb9b4
                       catch() { ... } // from try @ 05deb9b4 with catch @ 05deb9b4
                       catch() { ... } // from try @ 05debc94 with catch @ 05deb9b4
                       catch() { ... } // from try @ 05debf8c with catch @ 05deb9b4
                       catch() { ... } // from try @ 05dec050 with catch @ 05deb9b4
                       catch() { ... } // from try @ 05dec058 with catch @ 05deb9b4
                       catch() { ... } // from try @ 05dec064 with catch @ 05deb9b4
                       catch() { ... } // from try @ 05dec148 with catch @ 05deb9b4
                       catch() { ... } // from try @ 05dec1dc with catch @ 05deb9b4 */
  if (*(int *)(*(long *)param_1[0x1a5] + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  if (DAT_07a44f27 == '\0') {
    FUN_031f20f4(PTR_DAT_075e7d28);
    DAT_07a44f27 = '\x01';
  }
  puVar3 = PTR_DAT_075e7d28;
  lVar11 = *(long *)PTR_DAT_075e7d28;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar11 = *(long *)puVar3;
  }
  plVar16 = (long *)PTR_DAT_075e8180;
  if (**(char **)(lVar11 + 0xb8) == '\0') goto LAB_05debbb0;
LAB_05deba1c:
  lVar11 = *plVar16;
LAB_05deba24:
  if (*(int *)(lVar11 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
LAB_05debaa4:
  FUN_05dea49c();
  plVar16 = (long *)PTR_DAT_075e8180;
LAB_05debc1c:
  unaff_w28 = iStack0000000000000034 + unaff_w28;
  if ((int)unaff_w22 <= (int)unaff_w28) {
                    /* try { // try from 05debc74 to 05eebc7b has its CatchHandler @ 05dec084 */
    return;
  }
  if (unaff_w22 <= unaff_w28) goto LAB_05debc78;
  uVar2 = *(ushort *)(unaff_x23 + (long)(int)unaff_w28 * 2);
  if (uVar2 < 0x4c) {
    if (0x2f < uVar2) {
      if (0x46 < uVar2) {
        if (uVar2 == 0x48) {
          if (*(int *)(*plVar16 + 0xe4) == 0) {
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
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_05dec078(unaff_x20,unaff_x24);
        goto LAB_05debc1c;
      }
      if (uVar2 != 0x3a) {
        if (uVar2 == 0x46) goto switchD_05deaff0_caseD_66;
        goto switchD_05deaff0_caseD_65;
      }
      FUN_05d556ec();
joined_r0x05deb3c8:
      if (unaff_x25 == 0) goto LAB_05debc7c;
      FUN_05c94b84();
      goto LAB_05deb3dc;
    }
    if (uVar2 < 0x26) {
      if (uVar2 == 0x22) {
LAB_05deb11c:
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iStack0000000000000034 = FUN_05dea830();
        goto LAB_05debc1c;
      }
      if (uVar2 == 0x25) {
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar6 = FUN_05dea9d8();
        if ((iVar6 < 0) || (iVar6 == 0x25)) goto LAB_05debc80;
        uStack0000000000000028 = (undefined2)iVar6;
        if (*(long *)(*(long *)PTR_DAT_075ebfd8 + 0x38) == 0) {
          FUN_0322bf50(*(long *)PTR_DAT_075ebfd8);
        }
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_05deaba0(unaff_x20,&stack0x00000028,1);
LAB_05deaed4:
        iStack0000000000000034 = 2;
        goto LAB_05debc1c;
      }
    }
    else {
      if (uVar2 == 0x27) goto LAB_05deb11c;
      if (uVar2 == 0x2f) {
        FUN_05d54f84();
        goto joined_r0x05deb3c8;
      }
    }
  }
  else {
    if (0x6d < uVar2) {
      if (uVar2 < 0x75) {
        if (uVar2 == 0x73) {
          if (*(int *)(*plVar16 + 0xe4) == 0) {
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
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iVar6 = FUN_05dea680();
        iStack0000000000000034 = iVar6;
        if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_0759c258);
        }
        iVar7 = FUN_05de2a6c(&stack0x00000038);
        plVar16 = (long *)PTR_DAT_075e8180;
        if (iVar6 != 1) {
          if (iVar7 < 0xc) {
            FUN_05d54b34();
          }
          else {
            FUN_05d5522c();
          }
          goto joined_r0x05deb980;
        }
        if (iVar7 < 0xc) {
          lVar11 = FUN_05d54b34();
          if (lVar11 == 0) goto LAB_05debc7c;
          if (0 < *(int *)(lVar11 + 0x10)) {
            lVar11 = FUN_05d54b34();
            if (lVar11 != 0) {
LAB_05deb954:
              FUN_05c829ac(lVar11,0,0);
              if (unaff_x25 != 0) {
                FUN_05c95a6c();
                goto LAB_05debc1c;
              }
            }
LAB_05debc7c:
                    /* WARNING: Subroutine does not return */
            FUN_031f2390();
          }
        }
        else {
          lVar11 = FUN_05d5522c();
          if (lVar11 == 0) goto LAB_05debc7c;
          if (0 < *(int *)(lVar11 + 0x10)) {
            lVar11 = FUN_05d5522c();
            if (lVar11 == 0) goto LAB_05debc7c;
            goto LAB_05deb954;
          }
        }
        goto LAB_05debc1c;
      }
      if (uVar2 != 0x79) {
        if (uVar2 != 0x7a) goto switchD_05deaff0_caseD_65;
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        iStack0000000000000034 = FUN_05dea680();
        FUN_05debcd8(unaff_x20,unaff_x24);
        goto LAB_05debc1c;
      }
      if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
      iStack0000000000000030 = (**(code **)(*unaff_x26 + 0x268))();
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar16);
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
          plVar16 = (long *)PTR_DAT_075e8180;
          if (sVar5 == sVar4) {
            if ((*(long *)PTR_DAT_075e8110 == 0) ||
               (FUN_05c829ac(*(long *)PTR_DAT_075e8110,0,0), unaff_x25 == 0)) goto LAB_05debc7c;
            FUN_05c95a6c();
            goto LAB_05debc1c;
          }
        }
      }
      uVar10 = FUN_05d56f74();
      if ((uVar10 & 1) != 0) {
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        goto LAB_05debaa4;
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
        lVar11 = *(long *)PTR_DAT_075e7d28;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar11 = *(long *)puVar3;
        }
        if (**(char **)(lVar11 + 0xb8) == '\0') {
                    /* try { // try from 05debc3c to 05eebc67 has its CatchHandler @ 05dec098 */
          if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_05dea604();
          plVar16 = (long *)PTR_DAT_075e8180;
          goto LAB_05debc1c;
        }
      }
      if (2 < iStack0000000000000034) {
        uVar12 = FUN_05dfee30((long)&stack0x00000030 + 4,0);
        uVar12 = FUN_05c7e0d4(*(undefined8 *)PTR_DAT_075e4218,uVar12,0);
        if (*(int *)(*(long *)PTR_DAT_0759d328 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                    (*(long *)PTR_DAT_0759d328);
        }
        uVar13 = FUN_05d860e8(0);
        FUN_05dff00c(&stack0x00000030,uVar12,uVar13,0);
        goto joined_r0x05deb068;
      }
      if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      goto LAB_05debaa4;
    }
    if (uVar2 < 0x5d) {
      if (uVar2 != 0x4d) {
        if (uVar2 == 0x5c) {
          if (*(int *)(*plVar16 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          iVar6 = FUN_05dea9d8();
          if (iVar6 < 0) goto LAB_05debc80;
          if (unaff_x25 == 0) goto LAB_05debc7c;
          FUN_05c95a6c();
          goto LAB_05deaed4;
        }
        goto switchD_05deaff0_caseD_65;
      }
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iStack0000000000000034 = FUN_05dea680();
      if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
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
          lVar11 = *(long *)PTR_DAT_075e7d28;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            lVar11 = *(long *)puVar3;
          }
          if (**(char **)(lVar11 + 0xb8) == '\0') {
LAB_05debbb0:
            plVar16 = (long *)PTR_DAT_075e8180;
            if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
              Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
            }
                    /* try { // try from 05debbc0 to 05eebc03 has its CatchHandler @ 05dec148 */
            FUN_05dea604();
            goto LAB_05debc1c;
          }
        }
        lVar11 = *(long *)PTR_DAT_075e8180;
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
        lVar11 = *(long *)PTR_DAT_075e7d28;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar11 = *(long *)puVar3;
        }
        iVar6 = iStack0000000000000034;
        if (**(char **)(lVar11 + 0xb8) == '\0') {
          if (*(int *)(*(long *)PTR_DAT_075e8180 + 0xe4) == 0) {
            Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          }
          FUN_05dea770(unaff_x20,uVar8,iVar6);
          goto joined_r0x05deb068;
        }
      }
      puVar3 = PTR_DAT_075e8180;
      uVar10 = FUN_05d55a58();
      iVar6 = iStack0000000000000034;
      lVar11 = *(long *)puVar3;
      if (((uVar10 & 1) == 0) || (iStack0000000000000034 < 4)) {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
        }
        FUN_05dea73c(uVar8,iVar6);
      }
      else {
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar11);
        }
        FUN_05deaa48();
        FUN_05d55a98();
      }
joined_r0x05deb068:
      if (unaff_x25 == 0) goto LAB_05debc7c;
      FUN_05c94b84();
      plVar16 = (long *)PTR_DAT_075e8180;
      goto LAB_05debc1c;
    }
    switch(uVar2) {
    case 100:
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iStack0000000000000034 = FUN_05dea680();
      if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
      if (2 < iStack0000000000000034) {
        uVar8 = (**(code **)(*unaff_x26 + 0x1f8))();
        iVar6 = iStack0000000000000034;
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*plVar16);
        }
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                  (uVar8,iVar6);
        goto joined_r0x05deb068;
      }
      (**(code **)(*unaff_x26 + 0x1e8))();
      if ((in_stack_00000010 & 0x100000000) != 0) goto LAB_05deba1c;
      param_1 = &PTR_DAT_075e7000;
      goto code_r0x05deb9b4;
    case 0x66:
switchD_05deaff0_caseD_66:
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iStack0000000000000034 = FUN_05dea680();
      if (7 < iStack0000000000000034) {
LAB_05debc80:
        if (in_stack_00000000 == 0) {
                    /* try { // try from 05debc88 to 05eebc93 has its CatchHandler @ 05dec074 */
          FUN_05c97604();
        }
                    /* try { // try from 05debc94 to 05eebe23 has its CatchHandler @ 05deb9b4 */
        thunk_FUN_03257e30(PTR_DAT_0759d4c0);
        uVar12 = thunk_FUN_0322f148();
        uVar13 = thunk_FUN_03257e30(PTR_DAT_075e3588);
        FUN_05dea0e8(uVar12,uVar13);
        uVar13 = thunk_FUN_03257e30(PTR_DAT_075ebfe0);
                    /* WARNING: Subroutine does not return */
        FUN_031f225c(uVar12,uVar13);
      }
      if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar11 = FUN_05ddf7e0(&stack0x00000038);
      iVar6 = iStack0000000000000034;
      if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759b370);
      }
      dVar17 = (double)thunk_FUN_0322bbc4(0x4024000000000000,(double)(7 - iVar6),0);
      puVar3 = PTR_DAT_075e8180;
      lVar9 = -0x8000000000000000;
      if (dVar17 != INFINITY) {
        lVar9 = (long)dVar17;
      }
      lVar14 = 0;
      if (lVar9 != 0) {
        lVar14 = (lVar11 % 10000000) / lVar9;
      }
      iVar6 = (int)lVar14;
      unaff_x20 = in_stack_00000018;
      if (uVar2 == 0x66) {
        lVar11 = *(long *)PTR_DAT_075e8180;
        iStack000000000000002c = iVar6;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
        if (lVar11 == 0) goto LAB_05debc7c;
        if (*(uint *)(lVar11 + 0x18) <= iStack0000000000000034 - 1U) {
LAB_05debc78:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar11 = lVar11 + (long)(int)(iStack0000000000000034 - 1U) * 8;
        lVar9 = *(long *)PTR_DAT_0759d328;
      }
      else {
        iVar7 = iStack0000000000000034;
        if ((0 < iStack0000000000000034) && (iVar15 = iStack0000000000000034, iVar6 % 10 == 0)) {
          do {
            lVar11 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
            lVar14 = (lVar11 >> 2) - (lVar11 >> 0x3f);
            iVar7 = iVar15 + -1;
            if (iVar15 < 2) break;
            lVar11 = SUB168(SEXT816(lVar14) * SEXT816(unaff_x27),8);
            iVar15 = iVar7;
          } while (lVar14 == ((lVar11 >> 2) - (lVar11 >> 0x3f)) * 10);
        }
        if (iVar7 < 1) {
          if (unaff_x25 == 0) goto LAB_05debc7c;
          iVar6 = FUN_05c93cd4();
          plVar16 = (long *)PTR_DAT_075e8180;
          if (0 < iVar6) {
            FUN_05c93cd4();
            sVar5 = FUN_05c94608();
            if (sVar5 == 0x2e) {
              FUN_05c93cd4();
              FUN_05c95754();
            }
          }
          goto LAB_05debc1c;
        }
        iStack000000000000002c = (int)lVar14;
        lVar11 = *(long *)PTR_DAT_075e8180;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar11 = *(long *)puVar3;
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x28);
        if (lVar11 == 0) goto LAB_05debc7c;
        if (*(uint *)(lVar11 + 0x18) <= iVar7 - 1U) goto LAB_05debc78;
        lVar11 = lVar11 + (ulong)(iVar7 - 1U) * 8;
        lVar9 = *(long *)PTR_DAT_0759d328;
      }
      uVar12 = *(undefined8 *)(lVar11 + 0x20);
      if (*(int *)(lVar9 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      uVar13 = FUN_05d860e8(0);
      FUN_05dff00c((long)&stack0x00000028 + 4,uVar12,uVar13,0);
      if (unaff_x25 == 0) goto LAB_05debc7c;
      FUN_05c94b84();
      plVar16 = (long *)PTR_DAT_075e8180;
      goto LAB_05debc1c;
    case 0x67:
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iStack0000000000000034 = FUN_05dea680();
      if (unaff_x26 == (long *)0x0) goto LAB_05debc7c;
      (**(code **)(*unaff_x26 + 0x228))();
      FUN_05d54cf4();
joined_r0x05deb980:
      if (unaff_x25 == 0) goto LAB_05debc7c;
      FUN_05c94b84();
      goto LAB_05debc1c;
    case 0x68:
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iStack0000000000000034 = FUN_05dea680();
      if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759c258);
      }
      FUN_05de2a6c(&stack0x00000038);
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      FUN_05dea49c();
      plVar16 = (long *)PTR_DAT_075e8180;
      goto LAB_05debc1c;
    case 0x6d:
      if (*(int *)(*plVar16 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      iStack0000000000000034 = FUN_05dea680();
      if (*(int *)(*(long *)PTR_DAT_0759c258 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                  (*(long *)PTR_DAT_0759c258);
      }
      FUN_05de2be8(&stack0x00000038);
LAB_05deb7a8:
      FUN_05dea49c();
      goto LAB_05debc1c;
    }
  }
switchD_05deaff0_caseD_65:
  if (unaff_x25 == 0) goto LAB_05debc7c;
  FUN_05c95a6c();
LAB_05deb3dc:
  iStack0000000000000034 = 1;
  goto LAB_05debc1c;
}


