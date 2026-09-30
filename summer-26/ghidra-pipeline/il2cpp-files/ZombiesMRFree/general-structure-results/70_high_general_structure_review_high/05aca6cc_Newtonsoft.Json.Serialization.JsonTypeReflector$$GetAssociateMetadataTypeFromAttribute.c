/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonTypeReflector$$GetAssociateMetadataTypeFromAttribute
ENTRY_POINT: 05aca6cc
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


void Newtonsoft_Json_Serialization_JsonTypeReflector__GetAssociateMetadataTypeFromAttribute
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  uint unaff_w26;
  int unaff_w27;
  long unaff_x28;
  undefined8 unaff_x29;
  float fVar9;
  long *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  undefined *puVar8;
  
joined_r0x05aca6cc:
  do {
    if (param_1 == 0) {
LAB_05acaaa0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(unaff_x28,unaff_x29);
    }
LAB_05aca8cc:
    while( true ) {
      uVar4 = FUN_059df624();
      if ((uVar4 & 1) == 0) {
        fVar9 = *(float *)(unaff_x19 + 0x24) * (float)unaff_w27;
        iVar1 = -0x80000000;
        if (fVar9 != INFINITY) {
          iVar1 = (int)fVar9;
        }
        *(int *)(unaff_x19 + 0x20) = iVar1;
        if ((*(long *)(unaff_x19 + 0x40) == 0) && (unaff_x24 != 0 || in_stack_00000010 != 0)) {
          lVar5 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06facad8);
          FUN_05abd024(lVar5,unaff_x24,in_stack_00000010);
          *in_stack_00000008 = lVar5;
          thunk_FUN_03048534(in_stack_00000008,lVar5);
        }
        uVar6 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06faca58,unaff_w27);
        *unaff_x20 = uVar6;
        thunk_FUN_03048534(unaff_x20,uVar6);
        if (unaff_x21 == 0) {
          thunk_FUN_03037804(PTR_DAT_06f9aa18);
          uVar6 = thunk_FUN_0301080c();
          puVar8 = PTR_DAT_06f9aa20;
          goto LAB_05acaa70;
        }
        if (unaff_x22 == 0) {
          thunk_FUN_03037804(PTR_DAT_06f9aa18);
          uVar6 = thunk_FUN_0301080c();
          puVar8 = PTR_DAT_06f9af58;
          goto LAB_05acaa70;
        }
        uVar2 = *(uint *)(unaff_x21 + 0x18);
        if (uVar2 != *(uint *)(unaff_x22 + 0x18)) {
          thunk_FUN_03037804(PTR_DAT_06f9aa18);
          uVar6 = thunk_FUN_0301080c();
          puVar8 = PTR_DAT_06facb38;
          goto LAB_05acaa70;
        }
        if ((int)uVar2 < 1) goto LAB_05aca9ec;
        lVar5 = 0;
        goto LAB_05aca9b0;
      }
      uVar6 = FUN_059df4ac();
      uVar2 = Newtonsoft_Json_Serialization_TraceJsonWriter__WriteValue(uVar6,0);
      if (uVar2 <= unaff_w23) break;
      if (uVar2 < 0x94138db6) {
        if (uVar2 == 0x8d4d225b) {
          uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06facb00,0);
          if ((uVar4 & 1) != 0) {
            uVar6 = *(undefined8 *)PTR_DAT_06f9bd48;
            if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar6 = FUN_05afde1c(uVar6,0);
            if (in_stack_00000018 == 0)
            goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
            unaff_x28 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb00,uVar6,0);
            if (unaff_x28 != 0) {
              unaff_x29 = *(undefined8 *)PTR_DAT_06f6df38;
              unaff_x22 = thunk_FUN_03010710(unaff_x28,unaff_x29);
              param_1 = unaff_x22;
              goto joined_r0x05aca6cc;
            }
            unaff_x22 = 0;
          }
        }
        else if ((uVar2 == 0x94138db5) &&
                (uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06facb18,0),
                (uVar4 & 1) != 0)) {
          uVar6 = *(undefined8 *)PTR_DAT_06facaf0;
          if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
          }
          uVar6 = FUN_05afde1c(uVar6,0);
          if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
          unaff_x28 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb18,uVar6,0);
          if (unaff_x28 != 0) {
            unaff_x29 = *(undefined8 *)PTR_DAT_06fac658;
            unaff_x24 = thunk_FUN_03010710(unaff_x28,unaff_x29);
            unaff_w26 = 0x351df9d2;
            param_1 = unaff_x24;
            goto joined_r0x05aca6cc;
          }
          unaff_x24 = 0;
LAB_05aca8c0:
          unaff_w26 = 0x351df9d2;
        }
      }
      else if (uVar2 == 0xc80ab660) {
        uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06f9ca88,0);
        if ((uVar4 & 1) != 0) {
          if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
          unaff_w27 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9ca88,0);
        }
      }
      else if ((uVar2 == 0xcf9da972) &&
              (uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06facb10,0), (uVar4 & 1) != 0
              )) {
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        uVar3 = FUN_059f890c(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb10,0);
        *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
      }
    }
    if (uVar2 == unaff_w26) {
      uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06f9a9f8,0);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)PTR_DAT_06facae0;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar6 = FUN_05afde1c(uVar6,0);
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        unaff_x28 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9a9f8,uVar6,0);
        if (unaff_x28 == 0) {
          in_stack_00000010 = 0;
          goto LAB_05aca8c0;
        }
        unaff_x29 = *(undefined8 *)PTR_DAT_06f9bfa8;
        in_stack_00000010 = thunk_FUN_03010710(unaff_x28,unaff_x29);
        unaff_w26 = 0x351df9d2;
        param_1 = in_stack_00000010;
        goto joined_r0x05aca6cc;
      }
      goto LAB_05aca8cc;
    }
    if (uVar2 == 0x4939908b) {
      uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06facb08,0);
      if ((uVar4 & 1) != 0) {
        uVar6 = *(undefined8 *)PTR_DAT_06facae8;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar6 = FUN_05afde1c(uVar6,0);
        if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
        unaff_x28 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facb08,uVar6,0);
        puVar8 = PTR_DAT_06f99290;
        if (unaff_x28 == 0) {
          lVar5 = 0;
          *in_stack_00000008 = 0;
        }
        else {
          unaff_x29 = *(undefined8 *)PTR_DAT_06f99290;
          lVar5 = thunk_FUN_03010710(unaff_x28,unaff_x29);
          if (lVar5 == 0) goto LAB_05acaaa0;
          *in_stack_00000008 = lVar5;
          unaff_x29 = *(undefined8 *)puVar8;
          lVar5 = thunk_FUN_03010710(unaff_x28,unaff_x29);
          if (lVar5 == 0) goto LAB_05acaaa0;
        }
        thunk_FUN_03048534(in_stack_00000008,lVar5);
        unaff_w26 = 0x351df9d2;
        unaff_w23 = 0x602b32ed;
      }
      goto LAB_05aca8cc;
    }
    if ((uVar2 != unaff_w23) ||
       (uVar4 = thunk_FUN_05971620(uVar6,*(undefined8 *)PTR_DAT_06facaf8,0), (uVar4 & 1) == 0))
    goto LAB_05aca8cc;
    uVar6 = *(undefined8 *)PTR_DAT_06f9bd48;
    if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar6 = FUN_05afde1c(uVar6,0);
    if (in_stack_00000018 == 0) goto Newtonsoft_Json_Serialization_JsonTypeReflector___cctor;
    unaff_x28 = FUN_059f8194(in_stack_00000018,*(undefined8 *)PTR_DAT_06facaf8,uVar6,0);
    if (unaff_x28 == 0) {
      unaff_x21 = 0;
      goto LAB_05aca8cc;
    }
    unaff_x29 = *(undefined8 *)PTR_DAT_06f6df38;
    unaff_x21 = thunk_FUN_03010710(unaff_x28,unaff_x29);
    param_1 = unaff_x21;
  } while( true );
LAB_05aca9b0:
  if (uVar2 <= (uint)lVar5) {
LAB_05acaa50:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
  if (*(long *)(unaff_x21 + 0x20 + lVar5 * 8) == 0) {
    thunk_FUN_03037804(PTR_DAT_06f9aa18);
    uVar6 = thunk_FUN_0301080c();
    puVar8 = PTR_DAT_06facb28;
LAB_05acaa70:
    uVar7 = thunk_FUN_03037804(puVar8);
    FUN_059ed1a0(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03037804(PTR_DAT_06facb30);
                    /* WARNING: Subroutine does not return */
    FUN_02fe93c0(uVar6,uVar7);
  }
  if (*(uint *)(unaff_x22 + 0x18) <= (uint)lVar5) goto LAB_05acaa50;
  FUN_05ac8490();
  uVar2 = *(uint *)(unaff_x21 + 0x18);
  lVar5 = lVar5 + 1;
  if ((int)uVar2 <= (int)lVar5) {
LAB_05aca9ec:
    if (in_stack_00000018 != 0) {
      uVar3 = FUN_059f8624(in_stack_00000018,*(undefined8 *)PTR_DAT_06f9aa08,0);
      thunk_FUN_02fc2c1c();
      *(undefined4 *)(unaff_x19 + 0x28) = uVar3;
      lVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName();
      if (lVar5 != 0) {
        FUN_050e29b8();
        return;
      }
    }
Newtonsoft_Json_Serialization_JsonTypeReflector___cctor:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  goto LAB_05aca9b0;
}


