/*
FUNCTION_NAME: FUN_058d6be4
ENTRY_POINT: 058d6be4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_058d6be4(long param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 extraout_w1;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined4 local_58 [2];
  
  if ((DAT_06b80afe & 1) == 0) {
    FUN_02d6084c(System_Xml_Schema_XmlSchemaDocumentation_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c_TypeInfo);
    FUN_02d6084c(OVRPlugin_<>c__DisplayClass531_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_BodyJointLocation_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767838);
    FUN_02d6084c(PTR_DAT_0675e6d8);
    FUN_02d6084c(System_Xml_XmlChildEnumerator_TypeInfo);
    DAT_06b80afe = 1;
  }
  puVar6 = OVRPlugin_BodyJointLocation_TypeInfo;
  puVar5 = OVRPlugin_<>c__DisplayClass531_0_TypeInfo;
  puVar3 = System_Xml_XmlChildEnumerator_TypeInfo;
  puVar4 = PTR_DAT_06767838;
  local_58[0] = 0;
  if (param_2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_06767838 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    for (uVar7 = FUN_058d7244(param_1,0); uVar7 != 0xffffffff; uVar7 = FUN_058d7244(param_1,uVar7))
    {
      lVar13 = *(long *)puVar4;
      lVar10 = 0;
      uVar11 = 0;
      while( true ) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar4;
        }
        if ((long)*(int *)(*(long *)(lVar13 + 0xb8) + 0x18) <= (long)uVar11) break;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar4;
        }
        lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
        if (lVar14 == 0) goto LAB_058d723c;
        if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_058d7240;
        iVar8 = *(int *)(lVar14 + lVar10 + 0xcc);
        if (iVar8 <= (int)uVar7) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar4;
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
          if (lVar14 == 0) goto LAB_058d723c;
          if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_058d7240;
          if ((int)uVar7 < *(int *)(lVar14 + lVar10 + 200) + iVar8) goto LAB_058d6eb8;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0xb8;
      }
      uVar11 = 0xffffffff;
LAB_058d6eb8:
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *(long *)puVar4;
      }
      lVar10 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x40);
      if (lVar10 == 0) goto LAB_058d723c;
      if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_058d7240;
      FUN_058d48ac(uVar11 & 0xffffffff,*(undefined8 *)(lVar10 + (long)(int)uVar7 * 8 + 0x20),1);
      FUN_058d3a78(uVar11 & 0xffffffff,5,param_1);
      FUN_058d5b04(uVar11 & 0xffffffff,param_1,0,0);
    }
  }
  else if (param_2 == 1) {
    lVar10 = *(long *)PTR_DAT_06767838;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar10 = *(long *)puVar4;
    }
    puVar3 = System_Xml_Schema_XmlSchemaDocumentation_TypeInfo;
    iVar8 = FUN_032dff5c(*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x38),param_1,
                         *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x1c),
                         *(undefined8 *)System_Xml_Schema_XmlSchemaDocumentation_TypeInfo);
    while (iVar8 != -1) {
      lVar13 = *(long *)puVar4;
      lVar10 = 0;
      uVar11 = 0;
      while( true ) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar4;
        }
        if ((long)*(int *)(*(long *)(lVar13 + 0xb8) + 0x18) <= (long)uVar11) break;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar13 = *(long *)puVar4;
        }
        lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
        if (lVar14 == 0) goto LAB_058d723c;
        if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_058d7240;
        iVar9 = *(int *)(lVar14 + lVar10 + 0x4c);
        if (iVar9 <= iVar8) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar4;
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
          if (lVar14 == 0) goto LAB_058d723c;
          if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_058d7240;
          if (iVar8 < *(int *)(lVar14 + lVar10 + 0x48) + iVar9) goto LAB_058d702c;
        }
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0xb8;
      }
      uVar11 = 0xffffffff;
LAB_058d702c:
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_058d5b04(uVar11 & 0xffffffff,param_1,1,0);
      FUN_058d48ac(uVar11 & 0xffffffff,param_1,0);
      iVar8 = FUN_032dff5c(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38),param_1,
                           *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c),
                           *(undefined8 *)puVar3);
    }
  }
  else if (param_2 == 7) {
    iVar8 = 0;
    bVar2 = false;
    while( true ) {
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar10 = *(long *)puVar4;
      }
      lVar13 = *(long *)(lVar10 + 0xb8);
      if (*(int *)(lVar13 + 0x48) <= iVar8) break;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      lVar10 = FUN_037a47e4(lVar13 + 0x48,iVar8,*(undefined8 *)puVar6);
      if (lVar10 == param_1) {
        lVar10 = *(long *)puVar4;
        local_58[0] = 0;
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar10 = *(long *)puVar4;
        }
        FUN_037a47e4(*(long *)(lVar10 + 0xb8) + 0x48,iVar8,*(undefined8 *)puVar6);
        local_58[0] = extraout_w1;
        uVar11 = FUN_058d272c(local_58);
        uVar7 = FUN_058d6060(uVar11,param_1);
        if ((uVar7 >> 2 & 1) == 0) {
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar10 = *(long *)puVar4;
          }
          FUN_037a56f8(*(long *)(lVar10 + 0xb8) + 0x48,iVar8,*(undefined8 *)puVar5);
          lVar10 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28);
          if (lVar10 == 0) goto LAB_058d723c;
          if (*(uint *)(lVar10 + 0x18) <= (uint)uVar11) goto LAB_058d7240;
          iVar8 = iVar8 + -1;
          auVar15 = FUN_058c51d4(lVar10 + (long)(int)(uint)uVar11 * 4 + 0x20);
          uVar12 = FUN_03523e60(auVar15._0_8_,auVar15._8_8_,param_1,*(undefined8 *)puVar3);
          if ((uVar12 & 1) == 0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_058d5b04(uVar11 & 0xffffffff,param_1,0,0);
          }
          bVar2 = true;
        }
      }
      iVar8 = iVar8 + 1;
    }
    if (!bVar2) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
      }
      iVar8 = FUN_032dff5c(*(undefined8 *)(lVar13 + 0x38),param_1,*(undefined4 *)(lVar13 + 0x1c),
                           *(undefined8 *)System_Xml_Schema_XmlSchemaDocumentation_TypeInfo);
      puVar5 = OVRPlugin_<>c_TypeInfo;
      puVar3 = PTR_DAT_0675e6d8;
      for (; iVar8 != -1;
          iVar8 = FUN_032dfff4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38),param_1,
                               iVar9 + iVar8,
                               *(int *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c) - (iVar9 + iVar8),
                               *(undefined8 *)puVar5)) {
        lVar13 = *(long *)puVar4;
        lVar10 = 0;
        uVar11 = 0;
        while( true ) {
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar4;
          }
          if ((long)*(int *)(*(long *)(lVar13 + 0xb8) + 0x18) <= (long)uVar11) break;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar13 = *(long *)puVar4;
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
          if (lVar14 == 0) goto LAB_058d723c;
          if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_058d7240;
          iVar9 = *(int *)(lVar14 + lVar10 + 0x4c);
          if (iVar9 <= iVar8) {
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar13 = *(long *)puVar4;
            }
            lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x30);
            if (lVar14 == 0) goto LAB_058d723c;
            if (*(uint *)(lVar14 + 0x18) <= uVar11) goto LAB_058d7240;
            if (iVar8 < *(int *)(lVar14 + lVar10 + 0x48) + iVar9) goto LAB_058d718c;
          }
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0xb8;
        }
        uVar11 = 0xffffffff;
LAB_058d718c:
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        FUN_058d6060(uVar11 & 0xffffffff,param_1);
        lVar10 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
        if (lVar10 == 0) {
LAB_058d723c:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(uint *)(lVar10 + 0x18) <= (uint)uVar11) {
LAB_058d7240:
                    /* WARNING: Subroutine does not return */
          FUN_02d60af0();
        }
        uVar1 = *(undefined4 *)(lVar10 + (long)(int)(uint)uVar11 * 0xb8 + 0x48);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        iVar9 = FUN_0500808c(1,uVar1,0);
      }
    }
  }
  return;
}


