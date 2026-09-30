/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$Invoke
ENTRY_POINT: 06dc8d1c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 unaff_x21;
  long *plVar10;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e6c418);
  FUN_03c8f898(PTR_DAT_08e6b280);
  FUN_03c8f898(PTR_DAT_08e6b290);
  FUN_03c8f898(PTR_DAT_08e6c420);
  FUN_03c8f898(PTR_DAT_08e90d28);
  FUN_03c8f898(PTR_DAT_08e79f18);
  FUN_03c8f898(PTR_DAT_08e90e10);
  FUN_03c8f898(PTR_DAT_08e90e18);
  *(undefined1 *)(unaff_x20 + 0xcc8) = 1;
  puVar3 = PTR_DAT_08e90d08;
  puVar2 = PTR_DAT_08e6c418;
  puVar1 = PTR_DAT_08e6b280;
  puVar9 = (undefined8 *)(unaff_x19 + 0x78);
  plVar10 = (long *)*puVar9;
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e90d08) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06dc8e0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e90d08,1);
LAB_06dc8e0c:
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
    FUN_05d60b38();
    if (lVar6 == 0) goto LAB_06dc9088;
    FUN_05d68e9c(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e90d28);
    plVar10 = (long *)*puVar9;
    if (plVar10 == (long *)0x0) goto LAB_06dc9088;
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_06dc8eb0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar3,5);
LAB_06dc8eb0:
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_05d60ea4();
    if (lVar6 == 0) goto LAB_06dc9088;
    FUN_05d69d80(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e79f18);
  }
  *puVar9 = unaff_x21;
  thunk_FUN_03d233cc(puVar9);
  plVar10 = (long *)*puVar9;
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar6 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_06dc8f80;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar3,1);
LAB_06dc8f80:
  lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
  FUN_05d60b38();
  if (lVar6 != 0) {
    FUN_05d68e60(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e6c420);
    plVar10 = (long *)*puVar9;
    if (plVar10 != (long *)0x0) {
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_06dc9024;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar3,5);
LAB_06dc9024:
      lVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      FUN_05d60ea4();
      if (lVar6 != 0) {
        FUN_05d69d44(lVar6,uVar5,*(undefined8 *)PTR_DAT_08e6b290);
        return;
      }
    }
  }
LAB_06dc9088:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


