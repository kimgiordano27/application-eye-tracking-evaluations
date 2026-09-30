/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetAssociatedMetadataType
ENTRY_POINT: 05aca64c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_Serialization_JsonTypeReflector__GetAssociatedMetadataType(ulong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  uint unaff_w26;
  int unaff_w27;
  undefined8 uVar9;
  float fVar10;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
code_r0x05aca64c:
  if ((param_1 & 1) == 0) goto LAB_05aca8cc;
  uVar9 = *(undefined8 *)PTR_DAT_06facae0;
  if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar9 = FUN_05afde1c(uVar9,0);
  if (in_stack_00000018 != 0) {
    lVar4 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9a9f8,uVar9,0);
    if (lVar4 != 0) {
      uVar9 = *(undefined8 *)PTR_DAT_06f9bfa8;
      in_stack_00000010 = thunk_FUN_03010710(lVar4,uVar9);
      unaff_w26 = 0x351df9d2;
      lVar5 = in_stack_00000010;
      goto joined_r0x05aca6cc;
    }
    in_stack_00000010 = 0;
    do {
      unaff_w26 = 0x351df9d2;
LAB_05aca8cc:
      uVar6 = FUN_059df624();
      if ((uVar6 & 1) == 0) {
        fVar10 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w27;
        iVar1 = -0x80000000;
        if (fVar10 != INFINITY) {
          iVar1 = (int)fVar10;
        }
        *(int *)(unaff_x19 + 0x20) = iVar1;
        if ((*(long *)(unaff_x19 + 0x40) == 0) && (unaff_x24 != 0 || in_stack_00000010 != 0)) {
          lVar4 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06facad8);
          FUN_05abd024(lVar4,unaff_x24,in_stack_00000010);
          *in_stack_00000008 = lVar4;
          thunk_FUN_03048534(in_stack_00000008,lVar4);
        }
        uVar9 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06faca58,unaff_w27);
        *unaff_x20 = uVar9;
        thunk_FUN_03048534(unaff_x20,uVar9);
        if (unaff_x21 == 0) {
          thunk_FUN_03037804(PTR_DAT_06f9aa18);
          uVar9 = thunk_FUN_0301080c();
          puVar8 = PTR_DAT_06f9aa20;
          goto LAB_05acaa70;
        }
        if (unaff_x22 == 0) {
          thunk_FUN_03037804(PTR_DAT_06f9aa18);
          uVar9 = thunk_FUN_0301080c();
          puVar8 = PTR_DAT_06f9af58;
          goto LAB_05acaa70;
        }
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 != *(uint *)(unaff_x22 + 0x18)) {
          thunk_FUN_03037804(PTR_DAT_06f9aa18);
          uVar9 = thunk_FUN_0301080c();
          puVar8 = PTR_DAT_06facb38;
          goto LAB_05acaa70;
        }
        if ((int)uVar2 < 1) goto LAB_05aca9ec;
        lVar4 = 0;
        goto LAB_05aca9b0;
      }
      uVar9 = FUN_059df4ac();
      uVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(uVar9,0);
      if (uVar2 <= unaff_w23) {
        if (uVar2 == unaff_w26) {
          param_1 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06f9a9f8,0);
          goto code_r0x05aca64c;
        }
        if (uVar2 == 0x4939908b) {
          uVar6 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06facb08,0);
          if ((uVar6 & 1) != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_06facae8;
            if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar9 = FUN_05afde1c(uVar9,0);
            if (in_stack_00000018 == 0) break;
            lVar4 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb08,uVar9,0);
            puVar8 = PTR_DAT_06f99290;
            if (lVar4 == 0) {
              lVar5 = 0;
              *in_stack_00000008 = 0;
            }
            else {
              uVar9 = *(undefined8 *)PTR_DAT_06f99290;
              lVar5 = thunk_FUN_03010710(lVar4,uVar9);
              if (lVar5 == 0) goto LAB_05acaaa0;
              *in_stack_00000008 = lVar5;
              uVar9 = *(undefined8 *)puVar8;
              lVar5 = thunk_FUN_03010710(lVar4,uVar9);
              if (lVar5 == 0) goto LAB_05acaaa0;
            }
            thunk_FUN_03048534(in_stack_00000008,lVar5);
            unaff_w26 = 0x351df9d2;
            unaff_w23 = 0x602b32ed;
          }
          goto LAB_05aca8cc;
        }
        if ((uVar2 != unaff_w23) ||
           (uVar6 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06facaf8,0), (uVar6 & 1) == 0))
        goto LAB_05aca8cc;
        uVar9 = *(undefined8 *)PTR_DAT_06f9bd48;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        if (in_stack_00000018 == 0) break;
        lVar4 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facaf8,uVar9,0);
        if (lVar4 == 0) {
          unaff_x21 = 0;
          goto LAB_05aca8cc;
        }
        uVar9 = *(undefined8 *)PTR_DAT_06f6df38;
        unaff_x21 = thunk_FUN_03010710(lVar4,uVar9);
        lVar5 = unaff_x21;
joined_r0x05aca6cc:
        if (lVar5 == 0) {
LAB_05acaaa0:
                    /* WARNING: Subroutine does not return */
          FUN_02fe9884(lVar4,uVar9);
        }
        goto LAB_05aca8cc;
      }
      if (0x94138db5 < uVar2) {
        if (uVar2 == 0xc80ab660) {
          uVar6 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06f9ca88,0);
          if ((uVar6 & 1) != 0) {
            if (in_stack_00000018 == 0) break;
            unaff_w27 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9ca88,0);
          }
        }
        else if ((uVar2 == 0xcf9da972) &&
                (uVar6 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06facb10,0),
                (uVar6 & 1) != 0)) {
          if (in_stack_00000018 == 0) break;
          uVar3 = FUN_059f890c(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb10,0);
          *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
        }
        goto LAB_05aca8cc;
      }
      if (uVar2 == 0x8d4d225b) {
        uVar6 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06facb00,0);
        if ((uVar6 & 1) == 0) goto LAB_05aca8cc;
        uVar9 = *(undefined8 *)PTR_DAT_06f9bd48;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_05afde1c(uVar9,0);
        if (in_stack_00000018 == 0) break;
        lVar4 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb00,uVar9,0);
        if (lVar4 == 0) {
          unaff_x22 = 0;
          goto LAB_05aca8cc;
        }
        uVar9 = *(undefined8 *)PTR_DAT_06f6df38;
        unaff_x22 = thunk_FUN_03010710(lVar4,uVar9);
        lVar5 = unaff_x22;
        goto joined_r0x05aca6cc;
      }
      if ((uVar2 != 0x94138db5) ||
         (uVar6 = thunk_FUN_05971620(uVar9,*(undefined8 *)PTR_DAT_06facb18,0), (uVar6 & 1) == 0))
      goto LAB_05aca8cc;
      uVar9 = *(undefined8 *)PTR_DAT_06facaf0;
      if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar9 = FUN_05afde1c(uVar9,0);
      if (in_stack_00000018 == 0) break;
      lVar4 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb18,uVar9,0);
      if (lVar4 != 0) {
        uVar9 = *(undefined8 *)PTR_DAT_06fac658;
        unaff_x24 = thunk_FUN_03010710(lVar4,uVar9);
        unaff_w26 = 0x351df9d2;
        lVar5 = unaff_x24;
        goto joined_r0x05aca6cc;
      }
      unaff_x24 = 0;
    } while( true );
  }
  goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
LAB_05aca9b0:
  do {
    if (uVar2 <= (uint)lVar4) {
LAB_05acaa50:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    if (*(long *)(unaff_x21 + 0x20 + lVar4 * 8) == 0) {
      thunk_FUN_03037804(PTR_DAT_06f9aa18);
      uVar9 = thunk_FUN_0301080c();
      puVar8 = PTR_DAT_06facb28;
LAB_05acaa70:
      uVar7 = thunk_FUN_03037804(puVar8);
      FUN_059ed1a0(uVar9,uVar7,0);
      uVar7 = thunk_FUN_03037804(PTR_DAT_06facb30);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar9,uVar7);
    }
    if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar4) goto LAB_05acaa50;
    FUN_05ac8490();
    uVar2 = *(uint *)(unaff_x21 + 0x18);
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < (int)uVar2);
LAB_05aca9ec:
  if (in_stack_00000018 != 0) {
    uVar3 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9aa08,0);
    thunk_FUN_02fc2c1c();
    *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
    lVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
    if (lVar4 != 0) {
      FUN_050e29b8();
      return;
    }
  }
Newtonsoft_Json_Serialization_JsonTypeReflector___cctor:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


