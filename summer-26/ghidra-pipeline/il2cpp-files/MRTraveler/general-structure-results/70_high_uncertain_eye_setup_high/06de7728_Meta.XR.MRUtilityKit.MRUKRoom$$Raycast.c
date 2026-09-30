/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 06de7728
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06de79e4) */

undefined8 Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  char unaff_w19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0xa40));
  FUN_03c8f898(PTR_DAT_08e91ae8);
  FUN_03c8f898(PTR_DAT_08e779a0);
  *(undefined1 *)(unaff_x23 + 0xdd0) = 1;
  if (unaff_w19 == '\0') {
    unaff_x20 = FUN_06de4550();
  }
  uVar4 = FUN_06f7bdd8(0,0x20,unaff_w22 << 1,0);
  uVar4 = FUN_06f683f8(uVar4,unaff_x20,0);
  if (*(long *)(unaff_x21 + 0x30) != 0) {
    uVar5 = FUN_05a527b0(*(long *)(unaff_x21 + 0x30),unaff_x20,*(undefined8 *)PTR_DAT_08e91a40);
    if ((uVar5 & 1) == 0) {
      return uVar4;
    }
    if ((*(long *)(unaff_x21 + 0x30) != 0) &&
       (plVar6 = (long *)FUN_05a524d0(*(long *)(unaff_x21 + 0x30),unaff_x20,
                                      *(undefined8 *)PTR_DAT_08e91ae8), plVar6 != (long *)0x0)) {
      lVar9 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e91af8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06de7824;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e91af8,0);
LAB_06de7824:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      puVar3 = PTR_DAT_08e91b00;
      puVar2 = PTR_DAT_08e779a0;
      puVar1 = PTR_DAT_08e6a290;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      do {
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06de78a8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
LAB_06de78a8:
        uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar5 & 1) == 0) goto LAB_06de7950;
        lVar9 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06de7904;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar3,0);
LAB_06de7904:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
        FUN_056b2e3c();
        uVar8 = FUN_06de769c();
        uVar4 = FUN_06f7465c(uVar4,*(undefined8 *)puVar2,uVar8,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
LAB_06de7950:
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06de79ac;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
LAB_06de79ac:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return uVar4;
}


