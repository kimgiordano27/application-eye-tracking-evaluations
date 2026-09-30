/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeSceneData.SerializablePVProfile>
ENTRY_POINT: 0238e668
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x0238eaec) */

void System_Array__IndexOfImpl<ProbeVolumeSceneData_SerializablePVProfile>(long param_1)

{
  void *__src;
  code *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 in_x9;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *plVar17;
  long unaff_x24;
  long unaff_x29;
  undefined1 auVar18 [16];
  
  lVar7 = *(long *)(param_1 + 0x420);
  *(undefined8 *)(unaff_x29 + -0x70) = in_x9;
  if ((lVar7 == 0) || (plVar8 = (long *)FUN_03e95388(lVar7,0), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar7 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) ==
          *(long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo) {
        puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_0238e6d8;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)
           FUN_01c72498(plVar8,*(long *)
                                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo,
                        0);
LAB_0238e6d8:
  pcVar1 = (code *)*puVar9;
  uVar10 = puVar9[1];
  *(undefined8 *)(unaff_x29 + -0x78) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x20;
  plVar8 = (long *)(*pcVar1)(plVar8,uVar10);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  *(undefined4 *)(unaff_x29 + -0x44) = 0;
  puVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo;
  puVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo;
  puVar4 = PTR_DAT_04230960;
  do {
    lVar7 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0238e75c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar4,0);
LAB_0238e75c:
    uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar15 & 1) == 0) {
      lVar7 = *(long *)(unaff_x29 + -0x50);
      if (plVar8 == (long *)0x0) goto LAB_0238eaa8;
      lVar13 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 == 0) goto LAB_0238ea80;
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar9 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0238e7b8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar6,0);
LAB_0238e7b8:
    uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (*(long *)(unaff_x24 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar7 = *(long *)(*(long *)(unaff_x24 + 0x30) + 0x400);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar15 = FUN_0290dfa8(lVar7,uVar10,unaff_x29 + -0x40,*(undefined8 *)puVar5);
    if ((uVar15 & 1) != 0) {
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(long *)(unaff_x29 + -0x80) = unaff_x22;
      lVar7 = FUN_03f1bd64(unaff_x22,*(undefined4 *)(unaff_x29 + -0x44),0);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar11 = (long *)FUN_03f18ae8(lVar7,*(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Newtonsoft_Json_JsonSerializer_TypeInfo + 0xb8) +
                                            4),0);
      if (plVar11 == (long *)0x0) {
LAB_0238e868:
        plVar11 = (long *)0x0;
      }
      else {
        bVar3 = *(byte *)(*(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar3) goto LAB_0238e868;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo) {
          plVar11 = (long *)0x0;
        }
      }
      puVar9 = *(undefined8 **)(unaff_x29 + -0x70);
      plVar17 = *(long **)(*(long *)(unaff_x29 + -0x78) + 0x38);
      __src = *(void **)(unaff_x29 + -0x58);
      if (-1 < *(int *)(*plVar17 + 0x28)) {
        __src = (void *)(unaff_x29 + -0x38);
      }
      memcpy(puVar9,__src,*(size_t *)(unaff_x29 + -0x68));
      if (-1 < *(int *)(*plVar17 + 0x28)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      puVar14 = (undefined8 *)plVar17[1];
      uVar12 = *puVar14;
      *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x5c);
      *(long **)(unaff_x29 + -0x30) = plVar11;
      *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
      *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
      *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
      (*(code *)puVar14[2])(uVar12,puVar14,0,unaff_x29 + -0x30);
      plVar11 = (long *)FUN_03f0d9bc(lVar7,0);
      if (*(long *)(unaff_x29 + -0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x10);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar17 = (long *)FUN_03f06988(lVar13,0);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x2c) * 0x10 + 0x138);
            goto LAB_0238e978;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01c72498(plVar17,*(long *)
                                     Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo,0x2c
                           );
LAB_0238e978:
      (*(code *)*puVar9)(plVar17,puVar9[1]);
      auVar18 = FUN_03f24884(0);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar13 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar16 + 0x36) * 0x10 + 0x138);
            goto LAB_0238e9f0;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01c72498(plVar11,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x36);
LAB_0238e9f0:
      (*(code *)*puVar9)(plVar11,auVar18._0_8_,auVar18._8_8_ & 0xffffffff,puVar9[1]);
      uVar2 = **(undefined4 **)(*(long *)Newtonsoft_Json_JsonSerializer_TypeInfo + 0xb8);
      *(int *)(unaff_x29 + -0x44) = *(int *)(unaff_x29 + -0x44) + 1;
      FUN_03f18cc4(lVar7,uVar2,uVar10,0);
      unaff_x22 = *(long *)(unaff_x29 + -0x80);
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_0238ea9c;
    }
  }
LAB_0238ea80:
  puVar9 = (undefined8 *)FUN_01c72498(plVar8,*(long *)PTR_DAT_0422fce8,0);
LAB_0238ea9c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_0238eaa8:
  if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


