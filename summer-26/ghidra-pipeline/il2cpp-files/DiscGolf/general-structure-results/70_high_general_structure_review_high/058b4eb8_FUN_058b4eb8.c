/*
FUNCTION_NAME: FUN_058b4eb8
ENTRY_POINT: 058b4eb8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x058b51d0) */
/* WARNING: Removing unreachable block (ram,0x058b528c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_058b4eb8(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  
  if ((DAT_06dc0c69 & 1) == 0) {
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRFace_TypeInfo);
    FUN_02d965b8(System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Runtime_Serialization_XmlDataNode_TypeInfo);
    FUN_02d965b8(System_Data_XmlDataTreeWriter_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlDateTimeConverter_TypeInfo);
    FUN_02d965b8(System_Xml_XmlDateTimeSerializationMode_TypeInfo);
    FUN_02d965b8(System_Xml_XmlDeclaration_TypeInfo);
    DAT_06dc0c69 = 1;
  }
  plVar9 = (long *)FUN_058b3f3c(param_1);
  puVar8 = System_Xml_XmlDeclaration_TypeInfo;
  puVar7 = System_Xml_Schema_XmlDateTimeConverter_TypeInfo;
  puVar6 = System_Runtime_Serialization_XmlDataNode_TypeInfo;
  puVar5 = System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo;
  puVar4 = PTR_DAT_069fbff8;
  puVar3 = PTR_DAT_069fbff0;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
  lVar18 = 0;
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = *plVar9;
    lVar14 = *(long *)puVar4;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_058b5010;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar14,0);
LAB_058b5010:
    uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar16 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_02dd3048(plVar9,*(undefined8 *)puVar3);
      if (plVar9 == (long *)0x0) goto LAB_058b51c0;
      lVar15 = *plVar9;
      lVar14 = *(long *)puVar3;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar16 == 0) goto LAB_058b5198;
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = *plVar9;
    lVar14 = *(long *)puVar4;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto System_Net_Http_HttpClient__Dispose;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar14,1);
System_Net_Http_HttpClient__Dispose:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar14 = *plVar11;
    bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar11);
    }
    uVar16 = (**(code **)(lVar14 + 0x1d8))(plVar11,*(undefined8 *)(lVar14 + 0x1e0));
    if ((uVar16 & 1) != 0) {
      if (lVar18 == 0) {
        lVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
        FUN_0400f984(lVar18,*(undefined8 *)puVar7);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      lVar14 = *(long *)(lVar18 + 0x10);
      lVar15 = *(long *)puVar6;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar2 = *(uint *)(lVar18 + 0x18);
      if (uVar2 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar18 + 0x18) = uVar2 + 1;
        plVar12 = (long *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
        *plVar12 = (long)plVar11;
        LeanTween__value(plVar12,plVar11);
      }
      else {
        FUN_040101ec(lVar18,plVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == lVar14) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_058b51b4;
    }
  }
LAB_058b5198:
  puVar10 = (undefined8 *)FUN_02dd004c(plVar9,lVar14,0);
LAB_058b51b4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_058b51c0:
  if ((lVar18 == 0) || (*(int *)(lVar18 + 0x18) == 0)) {
    lVar14 = *(long *)UnityEngine_XR_ARSubsystems_XRFace_TypeInfo;
    lVar18 = *(long *)(lVar14 + 0x38);
    if (lVar18 == 0) {
      FUN_02dcfd74(lVar14);
      lVar18 = *(long *)(lVar14 + 0x38);
    }
    lVar18 = *(long *)(lVar18 + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02dcfd18();
    }
    if (*(int *)(lVar18 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar18 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(ushort *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = FUN_02dcfd18();
    }
    uVar13 = **(undefined8 **)(lVar18 + 0xb8);
  }
  else {
    uVar13 = FUN_04011c04(lVar18,*(undefined8 *)System_Data_XmlDataTreeWriter_TypeInfo);
  }
  return uVar13;
}


