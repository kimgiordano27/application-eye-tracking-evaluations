/*
FUNCTION_NAME: FUN_05477f28
ENTRY_POINT: 05477f28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0547840c) */
/* WARNING: Removing unreachable block (ram,0x05478294) */

void FUN_05477f28(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  long local_a8;
  long *local_a0;
  long local_98;
  undefined1 *local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  
  if ((DAT_06bbefcb & 1) == 0) {
    FUN_02f08768(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_02f08768(System_Xml_XmlEntity_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(System_Xml_XmlEntityReference_TypeInfo);
    FUN_02f08768(System_Xml_Serialization_XmlEnumAttribute_TypeInfo);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067cb9c0);
    FUN_02f08768(System_Xml_XmlEventCache_TypeInfo);
    FUN_02f08768(PTR_DAT_067caa30);
    FUN_02f08768(PTR_DAT_067cf218);
    DAT_06bbefcb = 1;
  }
  puVar1 = System_Xml_XmlEntity_TypeInfo;
  puVar11 = PTR_DAT_067cf218;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_58 = 0;
  local_88 = (long *)0x0;
  if (param_1 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar8 = thunk_FUN_02f45270();
    puVar11 = PTR_DAT_067caa18;
  }
  else {
    if (param_2 != (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_067cf218 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar2 = PTR_DAT_067cb9c0;
      local_70 = FUN_0547a9a4(param_1);
      lVar12 = *param_2;
      local_90 = local_70;
      local_98 = 0;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0547807c;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(param_2,*(long *)puVar1,0);
LAB_0547807c:
      uVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
      local_a8 = 0;
      local_a0 = (long *)0x0;
      FUN_03d55010(&local_a8,uVar6,2,1,*(undefined8 *)System_Xml_XmlEventCache_TypeInfo);
      plVar4 = local_a0;
      lVar12 = local_a8;
      lVar13 = *param_2;
      local_a8 = 0;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      local_80 = lVar12;
      uStack_78 = local_a0;
      local_a0 = &local_80;
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)System_Xml_XmlEntityReference_TypeInfo) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_05478110;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(param_2,*(long *)System_Xml_XmlEntityReference_TypeInfo,0)
      ;
LAB_05478110:
      local_88 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
      puVar3 = System_Xml_Serialization_XmlEnumAttribute_TypeInfo;
      puVar1 = PTR_DAT_067c91b8;
      if (local_88 != (long *)0x0) {
        iVar16 = 0;
        do {
          plVar5 = local_88;
          lVar13 = *local_88;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_05478190;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(local_88,*(long *)puVar1,0);
LAB_05478190:
          uVar14 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          plVar5 = local_88;
          if ((uVar14 & 1) == 0) {
            if (local_88 == (long *)0x0) goto LAB_05478288;
            lVar13 = *local_88;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar14 == 0) goto LAB_05478260;
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            goto LAB_05478248;
          }
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar13 = *local_88;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_054781f4;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(local_88,*(long *)puVar3,0);
LAB_054781f4:
          uVar8 = (*(code *)*puVar7)(plVar5,puVar7[1]);
          *(undefined8 *)(lVar12 + (long)iVar16 * 8) = uVar8;
          iVar16 = iVar16 + 1;
        } while (local_88 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar8 = thunk_FUN_02f45270();
    puVar11 = Oculus_Platform_Models_LaunchFriendRequestFlowResult_TypeInfo;
  }
  uVar10 = thunk_FUN_02f6ef30(puVar11);
  FUN_0504ee1c(uVar8,uVar10,0);
  uVar10 = thunk_FUN_02f6ef30(System_Xml_XmlException_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar8,uVar10);
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_05478248:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0547827c;
    }
  }
LAB_05478260:
  puVar7 = (undefined8 *)FUN_02f421d0(local_88,*(long *)PTR_DAT_067c91b0,0);
LAB_0547827c:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_05478288:
  uVar10 = local_70._8_8_;
  uVar8 = local_70._0_8_;
  if (*(int *)(*(long *)PTR_DAT_067caa30 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar14 = FUN_0542e2f0(uVar8,uVar10,lVar12,plVar4,&local_58,0);
  uVar9 = FUN_05416394(uVar14,0);
  if ((uVar9 & 1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x18))
                (*(undefined8 *)(param_3 + 0x40),param_1,uVar14 & 0xffffffff,
                 *(undefined8 *)(param_3 + 0x28));
    }
  }
  else {
    lVar12 = *(long *)puVar11;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar12 = *(long *)puVar11;
    }
    uVar8 = local_58;
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x20);
    uVar10 = FUN_0547ac4c(param_1);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_049cfbf4(lVar12,uVar8,uVar10,param_3,
                 *(undefined8 *)System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
  }
  FUN_03d552f8(local_a0,*(undefined8 *)puVar2);
  lVar12 = local_98;
  if (local_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0();
  }
  FUN_03d552f8(local_90,*(undefined8 *)puVar2);
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c0(lVar12);
}


