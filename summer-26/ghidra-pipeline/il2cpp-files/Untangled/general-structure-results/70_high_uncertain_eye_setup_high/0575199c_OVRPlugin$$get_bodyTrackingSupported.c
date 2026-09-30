/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 0575199c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_bodyTrackingSupported(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 unaff_x22;
  undefined8 *unaff_x24;
  long *unaff_x25;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000028;
  int iStack000000000000002c;
  undefined *puVar9;
  
code_r0x0575199c:
  thunk_FUN_02f12b58(param_1);
LAB_057519a0:
  uVar6 = FUN_055b5920(0);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*unaff_x25);
  }
  uVar4 = FUN_0556ae5c(unaff_x22,uVar6,0);
  if (unaff_x20 != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x10);
    lVar12 = *unaff_x28;
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = uVar4;
      }
      else {
        FUN_03f83a80(unaff_x20,uVar4,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      iVar10 = *(int *)(unaff_x19 + 0x20);
      while( true ) {
        *(int *)(unaff_x19 + 0x20) = iVar10 + 1;
        FUN_057508c4();
        iVar10 = *(int *)(unaff_x19 + 0x20);
        _cStack0000000000000028 = 0;
        lVar11 = *(long *)(unaff_x19 + 0x10);
        if (lVar11 == 0) break;
        iVar2 = iVar10;
        if (*(int *)(lVar11 + 0x10) <= iVar10) {
LAB_05751d64:
                    /* try { // try from 05751d64 to 05851d97 has its CatchHandler @ 05751e3c */
          thunk_FUN_02f239f0(PTR_DAT_06d55148);
          uVar6 = thunk_FUN_02ef1808();
          puVar9 = PTR_DAT_06d59478;
LAB_05751d80:
          uVar8 = thunk_FUN_02f239f0(puVar9);
          FUN_05693110(uVar6,uVar8,0);
                    /* catch() { ... } // from try @ 05751578 with catch @ 05751d98
                       try { // try from 05751d98 to 05851daf has its CatchHandler @ 05750a7c */
          uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d594d8);
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar6,uVar8);
        }
        while( true ) {
          uVar3 = FUN_05460528(lVar11,iVar2,0);
          in_stack_00000008._4_2_ = (short)uVar3;
          if ((uVar3 & 0xffff) != 0x20) break;
          FUN_0431f26c(&stack0x00000028,*(undefined4 *)(unaff_x19 + 0x20),*unaff_x24);
          FUN_057508c4();
LAB_0575187c:
          lVar11 = *(long *)(unaff_x19 + 0x10);
          if (lVar11 == 0) goto thunk_FUN_02f080c0;
          iVar2 = *(int *)(unaff_x19 + 0x20);
          if (*(int *)(lVar11 + 0x10) <= *(int *)(unaff_x19 + 0x20)) goto LAB_05751d64;
        }
        if ((uVar3 & 0xffff) == (unaff_w21 & 0xffff)) {
          iVar2 = iStack000000000000002c;
          if (cStack0000000000000028 == '\0') {
            iVar2 = *(int *)(unaff_x19 + 0x20);
          }
          iVar2 = iVar2 - iVar10;
          if (unaff_x20 == 0) {
            if (0 < unaff_w26) {
              if (0 < iVar2) {
                if (*(long *)(unaff_x19 + 0x10) == 0) break;
                uVar6 = FUN_05466d54(*(long *)(unaff_x19 + 0x10),iVar10,iVar2,0);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(*unaff_x27);
                }
                uVar8 = FUN_055b5920(0);
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(*unaff_x25);
                }
                uVar4 = FUN_0556ae5c(uVar6,uVar8,0);
                puVar7 = &stack0x00000018;
                if (unaff_w26 != 1) {
                  puVar7 = &stack0x00000010;
                }
                FUN_0431f26c(puVar7,uVar4,*unaff_x24);
              }
              lVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d594d0);
              FUN_05645a04(lVar11,0);
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) = in_stack_00000020;
                *(undefined8 *)(lVar11 + 0x18) = in_stack_00000018;
                *(undefined8 *)(lVar11 + 0x20) = in_stack_00000010;
                return lVar11;
              }
              break;
            }
            if (iVar2 != 0) {
              if (*(long *)(unaff_x19 + 0x10) != 0) {
                uVar6 = FUN_05466d54(*(long *)(unaff_x19 + 0x10),iVar10,iVar2,0);
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(*unaff_x27);
                }
                uVar8 = FUN_055b5920(0);
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_02f12b58(*unaff_x25);
                }
                FUN_0556ae5c(uVar6,uVar8,0);
                lVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d594c0);
                FUN_05645a04(lVar11,0);
                FUN_0431f26c();
                if (lVar11 != 0) {
                  *(undefined8 *)(lVar11 + 0x10) = 0;
                  return lVar11;
                }
              }
              break;
            }
          }
          else if (iVar2 != 0) {
            if (*(long *)(unaff_x19 + 0x10) != 0) {
              uVar6 = FUN_05466d54(*(long *)(unaff_x19 + 0x10),iVar10,iVar2,0);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*unaff_x27);
              }
              uVar8 = FUN_055b5920(0);
              if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                thunk_FUN_02f12b58(*unaff_x25);
              }
              uVar4 = FUN_0556ae5c(uVar6,uVar8,0);
              lVar11 = *(long *)(unaff_x20 + 0x10);
              lVar12 = *unaff_x28;
              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar3 = *(uint *)(unaff_x20 + 0x18);
                if (uVar3 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
                  *(undefined4 *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = uVar4;
                }
                else {
                  FUN_03f83a80(unaff_x20,uVar4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                lVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d594c8);
                FUN_05645a04(lVar11,0);
                *(long *)(lVar11 + 0x10) = unaff_x20;
                thunk_FUN_02f411dc((long *)(lVar11 + 0x10),unaff_x20);
                return lVar11;
              }
            }
            break;
          }
          goto LAB_05751e20;
        }
        uVar1 = uVar3 & 0xffff;
        if (uVar1 == 0x2a) {
          *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
          FUN_057510e4();
          FUN_057508c4();
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            uVar3 = FUN_05460528(*(long *)(unaff_x19 + 0x10),*(undefined4 *)(unaff_x19 + 0x20),0);
            if ((uVar3 & 0xffff) == (unaff_w21 & 0xffff)) {
              lVar11 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d594c0);
              FUN_05645a04(lVar11,0);
              return lVar11;
            }
LAB_05751dac:
                    /* try { // try from 05751db0 to 05851db3 has its CatchHandler @ 05751dc8 */
            thunk_FUN_02f239f0(PTR_DAT_06d02598);
            FUN_02a55ad4();
            uVar6 = FUN_05554088((long)&stack0x00000008 + 4,0);
                    /* catch() { ... } // from try @ 05751db0 with catch @ 05751dc8 */
            uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d594a0);
            uVar6 = FUN_05458458(uVar8,uVar6,0);
            thunk_FUN_02f239f0(PTR_DAT_06d55148);
            uVar8 = thunk_FUN_02ef1808();
            FUN_05693110(uVar8,uVar6,0);
                    /* try { // try from 05751e08 to 05851e3b has its CatchHandler @ 05751e3c */
            uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d594d8);
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar8,uVar6);
          }
          break;
        }
        if (uVar1 != 0x3a) {
          if (uVar1 != 0x2c) {
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar5 = FUN_0555def8(uVar3,0);
            if ((((uVar5 & 1) == 0) && (in_stack_00000008._4_2_ != 0x2d)) ||
               (cStack0000000000000028 != '\0')) goto LAB_05751dac;
            *(int *)(unaff_x19 + 0x20) = *(int *)(unaff_x19 + 0x20) + 1;
            goto LAB_0575187c;
          }
          iVar2 = iStack000000000000002c;
          if (cStack0000000000000028 == '\0') {
            iVar2 = *(int *)(unaff_x19 + 0x20);
          }
          if (iVar2 - iVar10 != 0) {
            if (unaff_x20 == 0) {
              unaff_x20 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d03490);
              FUN_03f8322c(unaff_x20,*(undefined8 *)PTR_DAT_06d03498);
            }
            if (*(long *)(unaff_x19 + 0x10) == 0) break;
            unaff_x22 = FUN_05466d54(*(long *)(unaff_x19 + 0x10),iVar10,iVar2 - iVar10,0);
            param_1 = *unaff_x27;
            if (*(int *)(param_1 + 0xe0) != 0) goto LAB_057519a0;
            goto code_r0x0575199c;
          }
LAB_05751e20:
          thunk_FUN_02f239f0(PTR_DAT_06d55148);
          uVar6 = thunk_FUN_02ef1808();
          puVar9 = PTR_DAT_06d594e0;
                    /* catch() { ... } // from try @ 05751c94 with catch @ 05751e3c
                       catch() { ... } // from try @ 05751cc8 with catch @ 05751e3c
                       catch() { ... } // from try @ 05751d64 with catch @ 05751e3c
                       catch() { ... } // from try @ 05751e08 with catch @ 05751e3c */
          goto LAB_05751d80;
        }
        iVar2 = iStack000000000000002c;
        if (cStack0000000000000028 == '\0') {
          iVar2 = *(int *)(unaff_x19 + 0x20);
        }
        if (0 < iVar2 - iVar10) {
          if (*(long *)(unaff_x19 + 0x10) == 0) break;
          uVar6 = FUN_05466d54(*(long *)(unaff_x19 + 0x10),iVar10,iVar2 - iVar10,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*unaff_x27);
          }
          uVar8 = FUN_055b5920(0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*unaff_x25);
          }
          uVar4 = FUN_0556ae5c(uVar6,uVar8,0);
          if (unaff_w26 == 0) {
            puVar7 = &stack0x00000020;
          }
          else if (unaff_w26 == 1) {
            puVar7 = &stack0x00000018;
          }
          else {
            puVar7 = &stack0x00000010;
          }
          FUN_0431f26c(puVar7,uVar4,*unaff_x24);
        }
        iVar10 = *(int *)(unaff_x19 + 0x20);
        unaff_w26 = unaff_w26 + 1;
      }
    }
  }
thunk_FUN_02f080c0:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


