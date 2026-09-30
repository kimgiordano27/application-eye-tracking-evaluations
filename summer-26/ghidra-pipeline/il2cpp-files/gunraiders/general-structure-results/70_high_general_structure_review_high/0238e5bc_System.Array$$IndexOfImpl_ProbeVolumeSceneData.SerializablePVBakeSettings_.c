/*
FUNCTION_NAME: System.Array$$IndexOfImpl<ProbeVolumeSceneData.SerializablePVBakeSettings>
ENTRY_POINT: 0238e5bc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_17
*/


/* WARNING: Removing unreachable block (ram,0x0238eaec) */

void System_Array__IndexOfImpl<ProbeVolumeSceneData_SerializablePVBakeSettings>(void)

{
  void *__src;
  code *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar18;
  long unaff_x24;
  long unaff_x29;
  undefined1 auVar19 [16];
  
  FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fce8);
  FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
  FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
  FUN_01c5d288(PTR_DAT_04230960);
  FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
  FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
  FUN_01c5d288(Newtonsoft_Json_JsonSerializer_TypeInfo);
  FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
  plVar15 = *(long **)(unaff_x21 + 0x38);
  if (plVar15 == (long *)0x0) {
    FUN_01c723f0();
    plVar15 = *(long **)(unaff_x21 + 0x38);
  }
  uVar2 = *(uint *)(*plVar15 + 0xfc);
  *(ulong *)(unaff_x29 + -0x68) = (ulong)uVar2;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  if (*(long *)(unaff_x24 + 0x30) != 0) {
    lVar8 = *(long *)(*(long *)(unaff_x24 + 0x30) + 0x420);
    *(ulong *)(unaff_x29 + -0x70) = (long)&stack0x00000000 - ((ulong)uVar2 + 0xf & 0x1fffffff0);
    if ((lVar8 != 0) && (plVar15 = (long *)FUN_03e95388(lVar8,0), plVar15 != (long *)0x0)) {
      lVar8 = *plVar15;
      uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0238e6d8;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_01c72498(plVar15,*(long *)
                                     Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo
                            ,0);
LAB_0238e6d8:
      pcVar1 = (code *)*puVar9;
      uVar10 = puVar9[1];
      *(long *)(unaff_x29 + -0x78) = unaff_x21;
      *(undefined8 *)(unaff_x29 + -0x50) = unaff_x20;
      plVar15 = (long *)(*pcVar1)(plVar15,uVar10);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(undefined4 *)(unaff_x29 + -0x44) = 0;
      puVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo;
      puVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo;
      puVar5 = PTR_DAT_04230960;
      do {
        lVar8 = *plVar15;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0238e75c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498(plVar15,*(long *)puVar5,0);
LAB_0238e75c:
        uVar16 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        if ((uVar16 & 1) == 0) {
          lVar8 = *(long *)(unaff_x29 + -0x50);
          if (plVar15 == (long *)0x0) goto LAB_0238eaa8;
          lVar13 = *plVar15;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 == 0) goto LAB_0238ea80;
          piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0238ea68;
        }
        lVar8 = *plVar15;
        uVar16 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar7) {
              puVar9 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_0238e7b8;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01c72498(plVar15,*(long *)puVar7,0);
LAB_0238e7b8:
        uVar10 = (*(code *)*puVar9)(plVar15,puVar9[1]);
        if (*(long *)(unaff_x24 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        lVar8 = *(long *)(*(long *)(unaff_x24 + 0x30) + 0x400);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar16 = FUN_0290dfa8(lVar8,uVar10,unaff_x29 + -0x40,*(undefined8 *)puVar6);
        if ((uVar16 & 1) != 0) {
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          *(long *)(unaff_x29 + -0x80) = unaff_x22;
          lVar8 = FUN_03f1bd64(unaff_x22,*(undefined4 *)(unaff_x29 + -0x44),0);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          plVar11 = (long *)FUN_03f18ae8(lVar8,*(undefined4 *)
                                                (*(long *)(*(long *)
                                                  Newtonsoft_Json_JsonSerializer_TypeInfo + 0xb8) +
                                                4),0);
          if (plVar11 == (long *)0x0) {
LAB_0238e868:
            plVar11 = (long *)0x0;
          }
          else {
            bVar4 = *(byte *)(*(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo +
                             0x130);
            if (*(byte *)(*plVar11 + 0x130) < bVar4) goto LAB_0238e868;
            if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar4 * 8 + -8) !=
                *(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo) {
              plVar11 = (long *)0x0;
            }
          }
          puVar9 = *(undefined8 **)(unaff_x29 + -0x70);
          plVar18 = *(long **)(*(long *)(unaff_x29 + -0x78) + 0x38);
          __src = *(void **)(unaff_x29 + -0x58);
          if (-1 < *(int *)(*plVar18 + 0x28)) {
            __src = (void *)(unaff_x29 + -0x38);
          }
          memcpy(puVar9,__src,*(size_t *)(unaff_x29 + -0x68));
          if (-1 < *(int *)(*plVar18 + 0x28)) {
            puVar9 = (undefined8 *)*puVar9;
          }
          puVar14 = (undefined8 *)plVar18[1];
          uVar12 = *puVar14;
          *(undefined4 *)(unaff_x29 + -0xc) = *(undefined4 *)(unaff_x29 + -0x5c);
          *(long **)(unaff_x29 + -0x30) = plVar11;
          *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
          *(undefined8 *)(unaff_x29 + -0x20) = uVar10;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
          (*(code *)puVar14[2])(uVar12,puVar14,0,unaff_x29 + -0x30);
          plVar11 = (long *)FUN_03f0d9bc(lVar8,0);
          if (*(long *)(unaff_x29 + -0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar13 = *(long *)(*(long *)(unaff_x29 + -0x40) + 0x10);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          plVar18 = (long *)FUN_03f06988(lVar13,0);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar13 = *plVar18;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0x2c) * 0x10 + 0x138);
                goto LAB_0238e978;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01c72498(plVar18,*(long *)
                                         Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo,
                                0x2c);
LAB_0238e978:
          (*(code *)*puVar9)(plVar18,puVar9[1]);
          auVar19 = FUN_03f24884(0);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          lVar13 = *plVar11;
          uVar16 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar17 + 0x36) * 0x10 + 0x138);
                goto LAB_0238e9f0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_01c72498(plVar11,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,
                                0x36);
LAB_0238e9f0:
          (*(code *)*puVar9)(plVar11,auVar19._0_8_,auVar19._8_8_ & 0xffffffff,puVar9[1]);
          uVar3 = **(undefined4 **)(*(long *)Newtonsoft_Json_JsonSerializer_TypeInfo + 0xb8);
          *(int *)(unaff_x29 + -0x44) = *(int *)(unaff_x29 + -0x44) + 1;
          FUN_03f18cc4(lVar8,uVar3,uVar10,0);
          unaff_x22 = *(long *)(unaff_x29 + -0x80);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_0238ea68:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_0238ea9c;
    }
  }
LAB_0238ea80:
  puVar9 = (undefined8 *)FUN_01c72498(plVar15,*(long *)PTR_DAT_0422fce8,0);
LAB_0238ea9c:
  (*(code *)*puVar9)(plVar15,puVar9[1]);
LAB_0238eaa8:
  if (*(long *)(lVar8 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


