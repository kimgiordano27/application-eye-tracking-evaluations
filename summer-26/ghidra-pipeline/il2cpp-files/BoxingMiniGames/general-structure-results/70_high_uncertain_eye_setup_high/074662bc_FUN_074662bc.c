/*
FUNCTION_NAME: FUN_074662bc
ENTRY_POINT: 074662bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_074662bc(undefined1 param_1 [16],float param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_07ef3d00 & 1) == 0) {
    FUN_03642964(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_03642964(Method_System_Collections_Generic_List<byte>_get_Count__);
    FUN_03642964(PTR_DAT_07a28ef8);
    FUN_03642964(PTR_DAT_07a28ef0);
    DAT_07ef3d00 = 1;
  }
  plVar5 = (long *)FUN_07464244(param_3);
  puVar3 = 
  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__;
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
           ) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
          goto LAB_07466380;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_0367cd30(plVar5,*(long *)
                                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                          ,0xc);
LAB_07466380:
    fVar12 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
    fVar13 = (float)FUN_074666b0(param_3);
    if (DAT_07ed76b8 == '\0') {
      FUN_03642964(PTR_DAT_079f4df8);
      DAT_07ed76b8 = '\x01';
    }
    fVar16 = ABS(fVar13);
    if (ABS(fVar13) <= 0.0) {
      fVar16 = 0.0;
    }
    fVar14 = **(float **)(*(long *)PTR_DAT_079f4df8 + 0xb8) * 8.0;
    fVar15 = fVar16 * DAT_016511f0;
    if (fVar16 * DAT_016511f0 <= fVar14) {
      fVar15 = fVar14;
    }
    if (ABS(0.0 - fVar13) < fVar15) {
      fVar16 = ABS(param_2);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      fVar15 = fVar16 * DAT_016511f0;
      if (fVar16 * DAT_016511f0 <= fVar14) {
        fVar15 = fVar14;
      }
      if (ABS(0.0 - param_2) < fVar15) {
        uVar11 = 0;
        goto LAB_074665e8;
      }
    }
    plVar5 = (long *)FUN_07464244(param_3);
    if (plVar5 != (long *)0x0) {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_07a28ef0;
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07466498;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0);
LAB_07466498:
      uVar9 = (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        plVar5 = (long *)FUN_07464244(param_3);
        if (plVar5 == (long *)0x0) goto LAB_074666ac;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar11 = *(undefined8 *)PTR_DAT_07a28ef8;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07466530;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0);
LAB_07466530:
        uVar9 = (*(code *)*puVar6)(plVar5,uVar11,puVar6[1]);
        fVar16 = fVar13 * *(float *)(param_3 + 0x5c) + param_2 * *(float *)(param_3 + 0x60);
        bVar1 = fVar16 <= 0.0;
        if ((uVar9 & 1) == 0) {
          if ((fVar16 <= 0.0) || (*(int *)(param_3 + 0x58) != 1)) {
            if (fVar12 <= *(float *)(param_3 + 100) + DAT_01651100) {
              return 0;
            }
          }
          else {
            bVar1 = false;
            if (fVar12 <= *(float *)(param_3 + 100) + 0.5) {
              return 0;
            }
          }
        }
      }
      else {
        bVar1 = fVar13 * *(float *)(param_3 + 0x5c) + param_2 * *(float *)(param_3 + 0x60) <= 0.0;
      }
      if (*(int *)(*(long *)Method_System_Collections_Generic_List<byte>_get_Count__ + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_07454540(fVar13,param_2,DAT_01650b5c,0);
      if ((int)uVar11 == 0) {
LAB_074665e8:
        *(undefined4 *)(param_3 + 0x58) = 0;
        *(undefined1 *)(param_3 + 0x68) = 0;
        return uVar11;
      }
      if (bVar1) {
        iVar7 = 1;
        *(undefined4 *)(param_3 + 0x58) = 0;
      }
      else {
        iVar7 = *(int *)(param_3 + 0x58) + 1;
      }
      bVar2 = *(byte *)(param_3 + 0x68);
      *(int *)(param_3 + 0x58) = iVar7;
      *(float *)(param_3 + 0x60) = param_2;
      *(float *)(param_3 + 100) = fVar12;
      *(float *)(param_3 + 0x5c) = fVar13;
      plVar5 = (long *)FUN_07464244(param_3);
      if (plVar5 != (long *)0x0) {
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
              goto LAB_0746666c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0367cd30(plVar5,*(long *)puVar3,0xb);
LAB_0746666c:
        bVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        *(byte *)(param_3 + 0x68) = bVar2 | bVar4 & 1;
        return 1;
      }
    }
  }
LAB_074666ac:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


