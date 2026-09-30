/*
FUNCTION_NAME: FUN_05fa5d80
ENTRY_POINT: 05fa5d80
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_6;strong_file_logging_hits_6
*/


void FUN_05fa5d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 long *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  if ((DAT_06a81e14 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_HelloDot_HoverThroughBehavior_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06611438);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06611480);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_06611488);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_HtmlEncodedRawTextWriter_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_HoverEnterEventArgs_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_HoverExitEvent_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ee070);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_HtmlTernaryTree_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_HtmlUtf8RawTextWriter_TypeInfo);
    DAT_06a81e14 = 1;
  }
  if (param_5 != (long *)0x0) {
    lVar12 = *param_5;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_06611480) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05fa5ec0;
        }
        uVar14 = uVar14 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_02ce0a7c(param_5,*(long *)PTR_DAT_06611480,0);
LAB_05fa5ec0:
    puVar6 = System_Xml_HtmlEncodedRawTextWriter_TypeInfo;
    puVar4 = PTR_DAT_06611438;
    iVar7 = (*(code *)*puVar9)(param_5,puVar9[1]);
    puVar5 = PTR_DAT_06611488;
    puVar3 = PTR_DAT_065ee070;
    if (0 < iVar7) {
      iVar18 = 0;
      do {
        lVar12 = *param_5;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05fa5f48;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_02ce0a7c(param_5,*(long *)puVar5,0);
LAB_05fa5f48:
        plVar10 = (long *)(*(code *)*puVar9)(param_5,iVar18,puVar9[1]);
        if (plVar10 == (long *)0x0) goto LAB_05fa62e4;
        uVar14 = (**(code **)(*plVar10 + 0x2b8))(plVar10,*(undefined8 *)(*plVar10 + 0x2c0));
        if ((uVar14 & 1) != 0) {
          lVar12 = FUN_05fa2a18(plVar10);
          if (lVar12 == 0) goto LAB_05fa62e4;
          uVar14 = FUN_060ec494(lVar12,0);
          if (((uVar14 & 1) == 0) && (iVar8 = FUN_05fa29fc(plVar10), iVar8 != -1)) {
            uVar11 = FUN_05fa2174(plVar10);
            fVar21 = *(float *)((long)plVar10 + 0x3c);
            lVar12 = plVar10[8];
            uVar20 = *(undefined4 *)((long)plVar10 + 0x44);
            lVar13 = plVar10[9];
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02cd038c(*(long *)puVar3);
            }
            uVar14 = FUN_060ed25c(param_1,param_2,fVar21,(int)lVar12,uVar20,(int)lVar13,uVar11,
                                  param_4,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              uVar14 = FUN_05ef59b8(param_4,0,0);
              if ((uVar14 & 1) != 0) {
                lVar12 = FUN_05fa2174(plVar10);
                if ((lVar12 == 0) || (FUN_05f01910(lVar12,0), param_4 == 0)) goto LAB_05fa62e4;
                FUN_05eb084c(param_4,0);
                fVar19 = (float)FUN_05eaf678(param_4,0);
                if (fVar19 < fVar21) goto LAB_05fa60ec;
              }
              uVar14 = (**(code **)(*plVar10 + 0x418))
                                 (param_1,param_2,plVar10,param_4,*(undefined8 *)(*plVar10 + 0x420))
              ;
              if ((uVar14 & 1) != 0) {
                lVar12 = *(long *)puVar4;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                  lVar12 = *(long *)puVar4;
                }
                lVar12 = **(long **)(lVar12 + 0xb8);
                if (lVar12 == 0) goto LAB_05fa62e4;
                lVar13 = *(long *)(lVar12 + 0x10);
                lVar15 = *(long *)puVar6;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 == 0) goto LAB_05fa62e4;
                uVar17 = *(uint *)(lVar12 + 0x18);
                if (uVar17 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar12 + 0x18) = uVar17 + 1;
                  *(long **)(lVar13 + (long)(int)uVar17 * 8 + 0x20) = plVar10;
                }
                else {
                  FUN_039683cc(lVar12,plVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
        }
LAB_05fa60ec:
        iVar18 = iVar18 + 1;
      } while (iVar18 != iVar7);
    }
    puVar3 = System_Xml_HtmlUtf8RawTextWriter_TypeInfo;
    lVar12 = *(long *)puVar4;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar12);
      lVar12 = *(long *)puVar4;
    }
    lVar13 = *(long *)puVar3;
    lVar12 = **(long **)(lVar12 + 0xb8);
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar13 = *(long *)puVar3;
    }
    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
    if (lVar15 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar13 = *(long *)puVar3;
      }
      uVar11 = **(undefined8 **)(lVar13 + 0xb8);
      lVar15 = thunk_FUN_02cea894(*(undefined8 *)Niantic_HelloDot_HoverThroughBehavior_TypeInfo);
      FUN_044613e4(lVar15,uVar11,*(undefined8 *)System_Xml_HtmlTernaryTree_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar15;
    }
    if (lVar12 != 0) {
      FUN_03969d6c(lVar12,lVar15,*(undefined8 *)System_Xml_HtmlEncodedRawTextWriterIndent_TypeInfo);
      lVar12 = *(long *)puVar4;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar12 = *(long *)puVar4;
      }
      puVar3 = UnityEngine_XR_Interaction_Toolkit_HoverExitEventArgs_TypeInfo;
      if (**(long **)(lVar12 + 0xb8) != 0) {
        uVar1 = *(uint *)(**(long **)(lVar12 + 0xb8) + 0x18);
        uVar17 = 0;
        while( true ) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
            lVar12 = *(long *)puVar4;
          }
          lVar12 = **(long **)(lVar12 + 0xb8);
          if (lVar12 == 0) break;
          if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar17) {
            iVar7 = *(int *)(lVar12 + 0x18);
            *(undefined4 *)(lVar12 + 0x18) = 0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (0 < iVar7) {
              FUN_04f53aa4(*(undefined8 *)(lVar12 + 0x10),0,iVar7,0);
              return;
            }
            return;
          }
          uVar11 = FUN_03968108(lVar12,uVar17,*(undefined8 *)puVar3);
          if (param_6 == 0) break;
          lVar12 = *(long *)(param_6 + 0x10);
          lVar13 = *(long *)puVar6;
          *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
          if (lVar12 == 0) break;
          uVar2 = *(uint *)(param_6 + 0x18);
          if (uVar2 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(param_6 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar2 * 8 + 0x20) = uVar11;
          }
          else {
            FUN_039683cc(param_6,uVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = *(long *)puVar4;
          uVar17 = uVar17 + 1;
        }
      }
    }
  }
LAB_05fa62e4:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


