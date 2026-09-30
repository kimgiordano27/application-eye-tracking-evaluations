/*
FUNCTION_NAME: OVRManager$$remove_SpaceSetComponentStatusComplete
ENTRY_POINT: 05302c54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__remove_SpaceSetComponentStatusComplete
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack000000000000002c;
  
  puVar1 = UnityEngine_CullingGroup_TypeInfo;
  fVar12 = param_2._0_4_;
  uStack000000000000002c = param_2._0_8_;
  if (unaff_x21 != (long *)0x0) {
    lVar5 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)UnityEngine_CullingGroup_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05302cb4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05302cb4:
    fVar10 = (float)(*(code *)*puVar4)();
    plVar9 = *(long **)(unaff_x20 + 0x128);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      fVar13 = fVar12;
      fVar14 = param_3;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05302d24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar5,0);
LAB_05302d24:
      iVar2 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_05302d84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar9,lVar5,1);
LAB_05302d84:
      fVar11 = (float)(*(code *)*puVar4)(plVar9,iVar2 + -1,puVar4[1]);
      if (unaff_x19 != 0) {
        uVar7 = FUN_05301cd0((param_3 - fVar14) * (param_3 - fVar14) +
                             (fVar10 - fVar11) * (fVar10 - fVar11) +
                             (fVar12 - fVar13) * (fVar12 - fVar13));
        if ((uVar7 & 1) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_037dcd8c();
        }
        return uVar3 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


