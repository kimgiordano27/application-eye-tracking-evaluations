/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppLatencyTimings
ENTRY_POINT: 076e08b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppLatencyTimings(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *plVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 unaff_s11;
  float unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined4 unaff_s15;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  FUN_08575dd0();
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  uStack000000000000004c = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  FUN_08596724(unaff_s11,unaff_s15,&stack0x00000040,0);
  plVar10 = *(long **)(unaff_x19 + 0x48);
  *(undefined4 *)(unaff_x19 + 0x80) = unaff_s13;
  *(undefined4 *)(unaff_x19 + 0x84) = unaff_s14;
  *(ulong *)(unaff_x19 + 0x94) = CONCAT44(uStack000000000000004c,in_stack_00000048);
  *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000040;
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076e0768 with catch @ 076e0910
                        */
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076e0844 with catch @ 076e0914
                        */
  *(ulong *)(unaff_x19 + 0xa0) = CONCAT44(in_stack_00000058,uStack0000000000000054);
  *(ulong *)(unaff_x19 + 0x98) = CONCAT44(in_stack_00000050,uStack000000000000004c);
                    /* catch(type#1 @ 08931438) { ... } // from try @ 076e0750 with catch @ 076e0918
                       catch(type#1 @ 08931438) { ... } // from try @ 076e0838 with catch @ 076e0918
                        */
  *(undefined4 *)(unaff_x19 + 0x88) = in_stack_00000038;
  puVar3 = PTR_DAT_08f8e6f0;
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 076e0934 to 077e0937 has its CatchHandler @ 076e0944 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f8e6f0) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076e0974;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar10,*(long *)PTR_DAT_08f8e6f0,0);
LAB_076e0974:
    uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(byte *)(unaff_x19 + 0x71) ^ 1;
    }
    plVar10 = *(long **)(unaff_x19 + 0x48);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      lVar6 = *(long *)puVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076e0a18;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_0406ae20(plVar10,lVar6,0);
LAB_076e0a18:
      bVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      puVar11 = (uint *)(unaff_x19 + 0x74);
      *(byte *)(unaff_x19 + 0x71) = bVar4 & 1;
      if (((fStack0000000000000014 * fStack0000000000000010 +
           fStack000000000000001c * unaff_s12 + fStack0000000000000018 * in_stack_00000028._4_4_) *
           0.5 + 0.5 <= 0.5) || ((uVar12 & *puVar11 >> 0x1f) == 0)) {
        if ((int)*puVar11 < 0) {
          return;
        }
        plVar10 = *(long **)(unaff_x19 + 0x58);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          lVar6 = *(long *)puVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_076e0ad8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_0406ae20(plVar10,lVar6,0);
LAB_076e0ad8:
          uVar8 = (*(code *)*puVar5)(plVar10,puVar5[1]);
          if ((uVar8 & 1) != 0) {
            FUN_076dfc50();
            *(undefined1 *)(unaff_x19 + 0xb0) = 0;
            *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
            return;
          }
          uVar12 = *puVar11;
          if ((int)uVar12 < 0) {
            return;
          }
          if (*(char *)(unaff_x19 + 0xb0) != '\0') {
            return;
          }
          lVar6 = *(long *)(unaff_x19 + 0x38);
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 <= uVar12) goto LAB_076e0bcc;
            lVar7 = *(long *)(lVar6 + (ulong)uVar12 * 8 + 0x20);
            if (lVar7 != 0) {
              if (*(float *)(lVar7 + 0x10) <= *(float *)(unaff_x19 + 0x7c)) {
                if (*(float *)(unaff_x19 + 0x7c) <= *(float *)(lVar7 + 0x14)) {
                  return;
                }
                uVar2 = uVar1 - 1;
                if ((int)(uVar12 + 1) <= (int)uVar2) {
                  uVar2 = uVar12 + 1;
                }
                *puVar11 = uVar2;
                if (uVar1 <= uVar2) goto LAB_076e0bcc;
                uVar8 = (ulong)(int)uVar2;
              }
              else {
                if ((int)uVar12 < 2) {
                  uVar12 = 1;
                }
                uVar12 = uVar12 - 1;
                *puVar11 = uVar12;
                if (uVar1 <= uVar12) {
LAB_076e0bcc:
                    /* WARNING: Subroutine does not return */
                  FUN_04031894();
                }
                uVar8 = (ulong)uVar12;
              }
              if (*(long *)(lVar6 + uVar8 * 8 + 0x20) != 0) goto LAB_076e0a68;
            }
          }
        }
      }
      else {
        lVar6 = FUN_076e0bd0(*(undefined4 *)(unaff_x19 + 0x7c));
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0x18) == '\0') {
            *puVar11 = 0xffffffff;
            return;
          }
LAB_076e0a68:
          FUN_076dfc50();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


