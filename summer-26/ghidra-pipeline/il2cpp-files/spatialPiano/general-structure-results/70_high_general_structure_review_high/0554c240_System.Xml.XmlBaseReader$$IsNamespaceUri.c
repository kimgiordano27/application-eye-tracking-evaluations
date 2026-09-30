/*
FUNCTION_NAME: System.Xml.XmlBaseReader$$IsNamespaceUri
ENTRY_POINT: 0554c240
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0554c704) */
/* WARNING: Removing unreachable block (ram,0x0554c700) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Xml_XmlBaseReader__IsNamespaceUri(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  
  if ((DAT_06bbf78c & 1) == 0) {
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
                );
    DAT_06bbf78c = 1;
  }
  puVar3 = PTR_DAT_067c91b8;
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    puVar5 = 
    UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer_StabilizePosition_00001216_PostfixBurstDelegate_TypeInfo
    ;
    puVar4 = 
    UnityEngine_XR_Interaction_Toolkit_Interactors_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_TypeInfo
    ;
    if (plVar7 != (long *)0x0) {
      uVar15 = 0;
LAB_0554c2ec:
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_0554c338;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar3,0);
LAB_0554c338:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        puVar2 = PTR_DAT_067c91b0;
        if ((uVar13 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_02f45174(plVar7,*(undefined8 *)PTR_DAT_067c91b0);
          if (plVar7 == (long *)0x0) goto LAB_0554c4e0;
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_0554c4b8;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_0554c4a0;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_0554c3a0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar3,1);
LAB_0554c3a0:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48();
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(lVar12 + 0x130)) &&
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            uVar6 = (**(code **)(lVar12 + 600))(plVar9,*(undefined8 *)(lVar12 + 0x260));
            uVar15 = uVar15 | uVar6;
            if (plVar7 == (long *)0x0) break;
            goto LAB_0554c2ec;
          }
        }
      } while (plVar7 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  goto LAB_0554c6fc;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0554c68c:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0554c6c0;
    }
  }
LAB_0554c6a4:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar2,0);
LAB_0554c6c0:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0554c6cc:
  if ((uVar15 & 1) != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) && (*(char *)(param_1 + 0x16e) != '\0')) {
      *(undefined1 *)(param_1 + 0x16e) = 0;
    }
    uVar10 = FUN_05566d24(0);
    uVar11 = thunk_FUN_02f6ef30(System_Xml_Schema_XdrBuilder_XdrEntry_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar11);
  }
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_0554c4a0:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_0554c4d4;
    }
  }
LAB_0554c4b8:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar2,0);
LAB_0554c4d4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0554c4e0:
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    puVar4 = System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo;
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0554c56c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar3,0);
LAB_0554c56c:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_02f45174(plVar7,*(undefined8 *)puVar2);
        if (plVar7 == (long *)0x0) goto LAB_0554c6cc;
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_0554c6a4;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_0554c68c;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_0554c5d4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar3,1);
LAB_0554c5d4:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar9);
      }
      if ((char)plVar9[4] == '\0') {
        uVar6 = FUN_05562788(plVar9,0);
        uVar15 = uVar15 | uVar6;
      }
      if (-1 < (int)plVar9[0xc]) {
        uVar6 = FUN_0556225c(plVar9,0);
        uVar15 = uVar15 | uVar6;
      }
    } while( true );
  }
LAB_0554c6fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


