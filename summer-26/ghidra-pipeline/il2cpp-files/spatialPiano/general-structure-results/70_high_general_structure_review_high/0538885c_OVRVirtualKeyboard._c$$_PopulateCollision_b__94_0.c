/*
FUNCTION_NAME: OVRVirtualKeyboard.<>c$$<PopulateCollision>b__94_0
ENTRY_POINT: 0538885c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void OVRVirtualKeyboard_<>c__<PopulateCollision>b__94_0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xf8));
  FUN_02f08768(OVR_OpenVR_IVRDriverManager_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0x582) = 1;
  puVar4 = UnityEngine_EventSystems_IUpdateSelectedHandler_TypeInfo;
  if ((unaff_x21 != 0) && (*(long *)(unaff_x20 + 0x28) != 0)) {
    uVar2 = 0;
    if (unaff_w22 != 0) {
      uVar2 = *(int *)(unaff_x21 + 0x18) / unaff_w22;
    }
    if (*(int *)(*(long *)(unaff_x20 + 0x28) + 0x18) < (int)uVar2) {
      FUN_02a7da48();
      Newtonsoft_Json_Linq_JObject__LoadAsync();
      puVar4 = PTR_DAT_067c9338;
      uStack000000000000000c = uVar2;
      uVar10 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),
                                  (long)&stack0x00000008 + 4);
      lVar11 = *(long *)(unaff_x20 + 0x28);
      FUN_02a7da48(lVar11);
      uStack0000000000000008 = (uint)*(undefined8 *)(lVar11 + 0x18);
      uVar8 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar4 + 0x48),&stack0x00000008);
      uVar9 = thunk_FUN_02f6ef30(OVR_OpenVR_IVRExtendedDisplay_TypeInfo);
      uVar10 = FUN_04f70018(uVar9,uVar10,uVar8,0);
      thunk_FUN_02f6ef30(PTR_DAT_067c9600);
      uVar8 = thunk_FUN_02f45270();
      FUN_0510bee0(uVar8,uVar10,0);
      uVar10 = thunk_FUN_02f6ef30(OVR_OpenVR_IVRIOBuffer_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar8,uVar10);
    }
    if ((*(long *)(unaff_x20 + 0x20) != 0) &&
       (plVar15 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x38), plVar15 != (long *)0x0)) {
      lVar11 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)UnityEngine_EventSystems_IUpdateSelectedHandler_TypeInfo) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_05388900;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02f421d0(plVar15,*(long *)
                                     UnityEngine_EventSystems_IUpdateSelectedHandler_TypeInfo,3);
LAB_05388900:
      uVar5 = (*(code *)*puVar6)(plVar15,puVar6[1]);
      if ((int)uVar5 < (int)uVar2) {
        if (*(char *)(*(long *)(*(long *)
                                 UnityEngine_UIElements_IUxmlSerializedDataDeserializeReference_TypeInfo
                               + 0xb8) + 4) == '\0') {
          return;
        }
        plVar15 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,2);
        puVar4 = PTR_DAT_067c9338;
        uStack000000000000000c = uVar2;
        lVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),
                                    (long)&stack0x00000008 + 4);
        if (plVar15 != (long *)0x0) {
          if ((lVar11 != 0) &&
             (lVar7 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)) {
LAB_05388cb8:
            uVar10 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar10,0);
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar11;
            uStack0000000000000008 = uVar5;
            lVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar4 + 0x48),&stack0x00000008);
            if ((lVar11 != 0) &&
               (lVar7 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
            goto LAB_05388cb8;
            puVar4 = PTR_DAT_067c8f48;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
              plVar15[5] = lVar11;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              FUN_060a97a4(*(undefined8 *)OVR_OpenVR_IVRCompositor_TypeInfo,plVar15,0);
              return;
            }
          }
LAB_05388bfc:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
      else if ((*(long *)(unaff_x20 + 0x20) != 0) &&
              (plVar15 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x38), plVar15 != (long *)0x0)) {
        lVar11 = *plVar15;
        uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_05388a5c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_02f421d0(plVar15,*(long *)puVar4,0);
LAB_05388a5c:
        uVar5 = (*(code *)*puVar6)(plVar15,uVar10,uVar2,puVar6[1]);
        if ((int)uVar5 < (int)uVar2) {
          plVar15 = (long *)FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9648,2);
          puVar4 = PTR_DAT_067c9338;
          uStack000000000000000c = uVar5;
          lVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),
                                      (long)&stack0x00000008 + 4);
          if (plVar15 != (long *)0x0) {
            if ((lVar11 == 0) ||
               (lVar7 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar7 != 0)) {
              if ((int)plVar15[3] != 0) {
                plVar15[4] = lVar11;
                uStack0000000000000008 = uVar2;
                lVar11 = thunk_FUN_02f44ec4(*(undefined8 *)(puVar4 + 0x48),&stack0x00000008);
                if ((lVar11 != 0) &&
                   (lVar7 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)
                   ) goto LAB_05388cb8;
                puVar4 = PTR_DAT_067c8f48;
                if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
                  plVar15[5] = lVar11;
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02f6670c();
                  }
                  FUN_060aa13c(*(undefined8 *)OVR_OpenVR_IVRDriverManager_TypeInfo,plVar15,0);
                  return;
                }
              }
              goto LAB_05388bfc;
            }
            goto LAB_05388cb8;
          }
        }
        else {
          if ((int)uVar2 < 1) {
            fVar17 = -1.0;
          }
          else {
            lVar11 = *(long *)(unaff_x20 + 0x28);
            if (lVar11 == 0) goto LAB_05388c00;
            uVar1 = *(uint *)(lVar11 + 0x18);
            uVar12 = 0;
            uVar5 = 0;
            fVar16 = -1.0;
            do {
              if (uVar12 == uVar1) goto LAB_05388bfc;
              fVar17 = fVar16;
              if (0 < unaff_w22) {
                fVar18 = *(float *)(lVar11 + uVar12 * 4 + 0x20);
                iVar14 = 0;
                iVar3 = unaff_w22;
                if (uVar5 <= *(uint *)(unaff_x21 + 0x18)) {
                  iVar14 = *(uint *)(unaff_x21 + 0x18) - uVar5;
                }
                do {
                  if (iVar14 == 0) goto LAB_05388bfc;
                  lVar7 = (long)(int)uVar5;
                  uVar5 = uVar5 + 1;
                  *(float *)(unaff_x21 + lVar7 * 4 + 0x20) = fVar18;
                  fVar17 = fVar18;
                  if (fVar18 <= fVar16) {
                    fVar17 = fVar16;
                  }
                  iVar3 = iVar3 + -1;
                  fVar16 = fVar17;
                  iVar14 = iVar14 + -1;
                } while (iVar3 != 0);
              }
              uVar12 = uVar12 + 1;
              fVar16 = fVar17;
            } while (uVar12 != uVar2);
          }
          if (*(long *)(unaff_x20 + 0x20) != 0) {
            *(float *)(*(long *)(unaff_x20 + 0x20) + 0x30) = fVar17;
            return;
          }
        }
      }
    }
  }
LAB_05388c00:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


