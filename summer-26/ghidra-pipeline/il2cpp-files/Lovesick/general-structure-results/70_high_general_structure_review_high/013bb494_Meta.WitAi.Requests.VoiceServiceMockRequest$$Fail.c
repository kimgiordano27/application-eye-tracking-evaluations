/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceMockRequest$$Fail
ENTRY_POINT: 013bb494
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_WitAi_Requests_VoiceServiceMockRequest__Fail(void)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  void *__s;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x21;
  ulong __n;
  undefined8 unaff_x24;
  long *plVar15;
  long *unaff_x25;
  undefined8 uVar16;
  undefined4 unaff_w26;
  undefined8 uVar17;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  lVar4 = FUN_00d5941c();
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x30);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if (*(int *)(lVar4 + 0x28) < 0) {
    iVar3 = thunk_FUN_00d42afc();
    uVar8 = iVar3 - 0x10;
  }
  else {
    uVar8 = 8;
  }
  __n = (ulong)uVar8;
  uVar11 = __n + 0xf & 0x1fffffff0;
  lVar4 = (long)&stack0x00000000 - uVar11;
  *(long *)(unaff_x29 + -0x90) = lVar4;
  __s = (void *)(lVar4 - uVar11);
  memset(__s,0,__n);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  lVar4 = *(long *)(lVar4 + 0xc0);
  *(void **)(unaff_x29 + -0xa0) = __s;
  if ((*(byte *)(*(long *)(lVar4 + 0x90) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar4 = thunk_FUN_00d62348();
  if (lVar4 == 0) {
LAB_013bbaa0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar9 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar9 + 0x132);
  lVar5 = lVar9;
  if ((uVar1 & 1) == 0) {
    lVar9 = FUN_00d5941c(lVar9);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
    lVar5 = *(long *)(unaff_x19 + 0x20);
  }
  uVar13 = **(undefined8 **)(*(long *)(lVar9 + 0xc0) + 0x98);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_00d5941c(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x98);
  (**(code **)(lVar5 + 0x10))(uVar13,lVar5,lVar4,0,0);
  *(long *)(lVar4 + 0x10) = unaff_x28;
  *(long *)(lVar4 + 0x18) = unaff_x27;
  if (unaff_x25 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = StringLiteral_1645;
  }
  else {
    if ((unaff_x28 != 0) || (unaff_x27 != 0)) {
      FUN_017f3980(unaff_w26,1,0);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
        lVar5 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      lVar5 = thunk_FUN_00d62348();
      if (lVar5 != 0) {
        lVar10 = *(long *)(unaff_x19 + 0x20);
        *(ulong *)(unaff_x29 + -0x98) = __n;
        uVar1 = *(ushort *)(lVar10 + 0x132);
        lVar9 = lVar10;
        if ((uVar1 & 1) == 0) {
          lVar10 = FUN_00d5941c(lVar10);
          uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
          lVar9 = *(long *)(unaff_x19 + 0x20);
        }
        puVar7 = ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo;
        uVar13 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x68);
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_00d5941c(lVar9);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x68);
        *(undefined4 *)(unaff_x29 + -0x84) = unaff_w26;
        *(undefined8 *)(unaff_x29 + -0x80) = unaff_x24;
        *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x84;
        (**(code **)(lVar9 + 0x10))(uVar13,lVar9,lVar5,unaff_x29 + -0x80,unaff_x29 + -0x84);
        *(long *)(lVar4 + 0x20) = lVar5;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_017e8fb0(0);
        if ((uVar11 & 1) != 0) {
          uVar17 = *(undefined8 *)(lVar4 + 0x20);
          uVar14 = *(undefined8 *)StringLiteral_5620;
          uVar13 = (**(code **)(*unaff_x25 + 0x168))();
          uVar13 = FUN_015f5b28(uVar14,uVar13,0);
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar7);
          }
          FUN_017e8fb8(0,uVar17,uVar13,0,0);
        }
        uVar13 = *(undefined8 *)(lVar4 + 0x20);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03776305 == '\0') {
          thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
          thunk_FUN_00d48444(
                            Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                            );
          DAT_03776305 = '\x01';
        }
        puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
        lVar5 = *(long *)
                 Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar5 = *(long *)puVar2;
        }
        puVar2 = 
        Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_017e9060(uVar13,0);
        }
        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar9 = *(long *)(unaff_x19 + 0x20);
        if ((*(byte *)(lVar9 + 0x132) & 1) == 0) {
          lVar9 = FUN_00d5941c();
        }
        FUN_016f4a88(lVar5,lVar4,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0xa0),0);
        (*(code *)unaff_x25[3])(unaff_x25[8],lVar5);
        plVar15 = *(long **)(unaff_x29 + -0x80);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar5 = *plVar15;
        uVar11 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_013bb818;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_00d59724(plVar15,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,3);
LAB_013bb818:
        uVar11 = (*(code *)*puVar6)(plVar15,puVar6[1]);
        if ((uVar11 & 1) != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x20);
          uVar13 = *(undefined8 *)(lVar4 + 0x10);
          uVar14 = *(undefined8 *)(lVar4 + 0x18);
          uVar17 = *(undefined8 *)(lVar4 + 0x20);
          uVar1 = *(ushort *)(lVar9 + 0x132);
          lVar5 = lVar9;
          if ((uVar1 & 1) == 0) {
            lVar5 = FUN_00d5941c();
            lVar9 = *(long *)(unaff_x19 + 0x20);
            uVar1 = *(ushort *)(lVar9 + 0x132);
          }
          uVar16 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa8);
          if ((uVar1 & 1) == 0) {
            lVar9 = FUN_00d5941c();
          }
          lVar5 = *(long *)(*(long *)(lVar9 + 0xc0) + 0xa8);
          *(undefined1 *)(unaff_x29 + -0x84) = 0;
          *(long **)(unaff_x29 + -0x80) = plVar15;
          *(undefined8 *)(unaff_x29 + -0x78) = uVar13;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar14;
          *(undefined8 *)(unaff_x29 + -0x68) = uVar17;
          *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x84;
          (**(code **)(lVar5 + 0x10))(uVar16,lVar5,0,unaff_x29 + -0x80,unaff_x29 + -0x84);
        }
        if (*(long *)(unaff_x21 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(*(undefined8 *)(lVar4 + 0x20));
        }
        return;
      }
      goto LAB_013bbaa0;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar13 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = Method_CharmBracelet_OnGrab__;
  }
  uVar14 = thunk_FUN_00d48444(puVar7);
  FUN_016ec5b8(uVar13,uVar14,0);
  uVar14 = thunk_FUN_00d48444(Method_System_Globalization_Bootstring_Decode__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar13,uVar14);
}


