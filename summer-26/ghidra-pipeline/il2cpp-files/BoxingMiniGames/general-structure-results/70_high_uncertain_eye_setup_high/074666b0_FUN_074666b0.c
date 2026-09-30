/*
FUNCTION_NAME: FUN_074666b0
ENTRY_POINT: 074666b0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


float FUN_074666b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  float fVar11;
  
  if ((DAT_07ef3cff & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(PTR_DAT_07a28ef8);
    FUN_03642964(PTR_DAT_07a28ef0);
    DAT_07ef3cff = 1;
  }
  if (DAT_07ed7e03 == '\0') {
    FUN_03642964(PTR_DAT_079f7f08);
    DAT_07ed7e03 = '\x01';
  }
  plVar5 = (long *)FUN_07464244(param_1);
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  puVar1 = PTR_DAT_07a28ef0;
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    uVar10 = *(undefined8 *)PTR_DAT_07a28ef0;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
           ) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07466794;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0367cd30(plVar5,*(long *)
                                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                          ,1);
LAB_07466794:
    fVar11 = (float)(*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
    plVar5 = (long *)FUN_07464244(param_1);
    puVar2 = PTR_DAT_07a28ef8;
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      uVar10 = *(undefined8 *)PTR_DAT_07a28ef8;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_07466814;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,1);
LAB_07466814:
      (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
      plVar5 = (long *)FUN_07464244(param_1);
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar10 = *(undefined8 *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_07466888;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0);
LAB_07466888:
        uVar8 = (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
        if ((uVar8 & 1) != 0) {
          fVar4 = -1.0;
          if (0.0 <= fVar11) {
            fVar4 = fVar11;
          }
          fVar11 = fVar4;
          if (0.0 < fVar11) {
            fVar11 = 1.0;
          }
        }
        plVar5 = (long *)FUN_07464244(param_1);
        if (plVar5 != (long *)0x0) {
          lVar7 = *plVar5;
          uVar10 = *(undefined8 *)puVar2;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_07466914;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0);
LAB_07466914:
          (*(code *)*puVar6)(plVar5,uVar10,puVar6[1]);
          return fVar11;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


