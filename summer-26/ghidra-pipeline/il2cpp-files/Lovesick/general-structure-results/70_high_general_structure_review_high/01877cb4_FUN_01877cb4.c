/*
FUNCTION_NAME: FUN_01877cb4
ENTRY_POINT: 01877cb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long * FUN_01877cb4(long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
                   long param_6)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = Method_Oculus_Platform_Request<SystemVoipState>__ctor__;
  if ((DAT_0377976d & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(StringLiteral_8955);
    thunk_FUN_00d48444(PTR_DAT_033ec918);
    thunk_FUN_00d48444(StringLiteral_2672);
    thunk_FUN_00d48444(StringLiteral_2317);
    thunk_FUN_00d48444(System_IO_DriveNotFoundException_TypeInfo);
    thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<SystemVoipState>__ctor__);
    thunk_FUN_00d48444(Method_System_Text_UTF8Encoding_GetByteCount__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
    DAT_0377976d = 1;
  }
  uStack_70 = 0;
  local_68 = 0;
  local_78 = 0;
  plVar5 = (long *)thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar2);
  plVar7 = param_2;
  if (plVar5 != (long *)0x0) {
    lVar11 = *plVar5;
    lVar10 = *(long *)puVar2;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01877de8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)FUN_00d59724(plVar5,lVar10,0);
LAB_01877de8:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if (param_6 != 0) {
    FUN_01880014(param_1,param_3,param_6,plVar7);
  }
  FUN_018803d4(param_1,param_3,param_4,plVar7);
  if (param_3 == (long *)0x0) {
LAB_018785a4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*param_3 + 0x268))(param_3,*(undefined8 *)(*param_3 + 0x270));
  if (param_4 == 0) goto LAB_018785a4;
  if (*(long *)(param_4 + 0xd8) == 0) {
    uVar8 = FUN_018791ac(param_1,*(undefined8 *)(param_4 + 200));
    *(undefined8 *)(param_4 + 0xd8) = uVar8;
  }
  if (*(long *)(param_4 + 0x90) == 0) {
    uVar8 = FUN_018791ac(param_1,*(undefined8 *)(param_4 + 0xd0));
    FUN_018735b8(param_4,uVar8);
  }
  local_98 = *(long **)(param_4 + 0xa0);
  if (local_98 == (long *)0x0) {
    local_98 = (long *)FUN_01879628(param_1,*(undefined8 *)(param_4 + 0x90),0,param_4,param_5);
  }
  plVar5 = *(long **)(param_4 + 0xd8);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)Method_System_Text_UTF8Encoding_GetByteCount__ + 300);
    if ((bVar1 <= *(byte *)(*plVar5 + 300)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_System_Text_UTF8Encoding_GetByteCount__)) {
      uVar15 = *(uint *)((long)plVar5 + 0x8c) & 0xfffffffe;
      goto LAB_01877ee4;
    }
  }
  uVar15 = 0;
LAB_01877ee4:
  do {
    iVar3 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
    if (iVar3 == 0xd) goto LAB_0187856c;
    if (iVar3 != 5) {
      if (iVar3 != 4) {
        FUN_00ac2be8(param_3);
        uVar4 = (**(code **)(*param_3 + 0x238))(param_3,*(undefined8 *)(*param_3 + 0x240));
        local_90 = thunk_FUN_00d48444(
                                     Method_System_Collections_Generic_List<IUIElementsUtility>__ctor__
                                     );
        uStack_88 = 0xffffffffffffffff;
        local_80 = uVar4;
        uVar8 = FUN_017a7f78(&local_90,0);
        uVar9 = thunk_FUN_00d48444(StringLiteral_13059);
        uVar8 = FUN_015f5b28(uVar9,uVar8,0);
        uVar8 = FUN_01801b58(param_3,uVar8,0);
        uVar9 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<Quaternion>_set_Capacity__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar8,uVar9);
      }
      plVar5 = (long *)(**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
      if (plVar5 == (long *)0x0) goto LAB_018785a4;
      uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar13 = FUN_0187a7c0(param_1,param_3,uVar8);
      if ((uVar13 & 1) == 0) {
        if (uVar15 == 0x1c) {
          uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          lVar10 = param_3[0xc];
          uVar9 = FUN_01805234(param_3,0);
          if (*(int *)(*(long *)PTR_DAT_033ec918 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_01854090(uVar8,lVar10,uVar9,&local_78,0);
          if ((uVar13 & 1) == 0) {
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_01731954(0);
            uVar8 = FUN_0187ba00(uVar8,param_3,plVar5,uVar8,*(undefined8 *)(param_4 + 0xd8),
                                 *(undefined8 *)(param_4 + 200));
          }
          else {
            uStack_88 = uStack_70;
            local_90 = local_78;
            uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_8955,&local_90);
          }
        }
        else if (uVar15 == 0x1a) {
          uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          lVar10 = param_3[9];
          lVar11 = param_3[0xc];
          uVar9 = FUN_01805234(param_3,0);
          if (*(int *)(*(long *)PTR_DAT_033ec918 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_018539a0(uVar8,(int)lVar10,lVar11,uVar9,&local_68,0);
          if ((uVar13 & 1) == 0) {
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_01731954(0);
            uVar8 = FUN_0187ba00(uVar8,param_3,plVar5,uVar8,*(undefined8 *)(param_4 + 0xd8),
                                 *(undefined8 *)(param_4 + 200));
          }
          else {
            local_90 = local_68;
            uVar8 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_2672,&local_90);
          }
        }
        else {
          lVar10 = *(long *)(param_4 + 0xd8);
          if ((lVar10 == 0) || (*(char *)(lVar10 + 0x12) == '\0')) {
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_01731954(0);
            uVar8 = FUN_0187ba00(uVar8,param_3,plVar5,uVar8,*(undefined8 *)(param_4 + 0xd8),
                                 *(undefined8 *)(param_4 + 200));
          }
          else {
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            plVar12 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
            uVar8 = *(undefined8 *)(lVar10 + 0x18);
            if (plVar12 == (long *)0x0) {
LAB_018780b8:
              lVar10 = 0;
            }
            else {
              bVar1 = *(byte *)(*(long *)StringLiteral_2317 + 300);
              if ((*(byte *)(*plVar12 + 300) < bVar1) ||
                 (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                  *(long *)StringLiteral_2317)) goto LAB_018780b8;
              lVar10 = plVar12[6];
            }
            uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
            if (*(int *)(*(long *)System_IO_DriveNotFoundException_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_01857420(uVar8,lVar10,uVar9,0,0);
          }
        }
        uVar13 = FUN_01808ca8(param_3,*(undefined8 *)(param_4 + 0x90),local_98 != (long *)0x0,0);
        if ((uVar13 & 1) == 0) {
          uVar8 = thunk_FUN_00d48444(Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
          uVar8 = FUN_01801b58(param_3,uVar8,0);
          uVar9 = thunk_FUN_00d48444(
                                    Method_System_Collections_Generic_List<Quaternion>_set_Capacity__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar8,uVar9);
        }
        if (local_98 == (long *)0x0) {
LAB_01878210:
          uVar9 = FUN_01879aa8(param_1,param_3,*(undefined8 *)(param_4 + 0xd0),
                               *(undefined8 *)(param_4 + 0x90),0,param_4,param_5,0);
        }
        else {
          uVar13 = (**(code **)(*local_98 + 0x1a8))(local_98,*(undefined8 *)(*local_98 + 0x1b0));
          if ((uVar13 & 1) == 0) goto LAB_01878210;
          uVar9 = FUN_01879694(param_1,local_98,param_3,*(undefined8 *)(param_4 + 0xd0),0);
        }
        if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar10 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_01878294;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_00d59724(param_2,*(long *)
                                       System_Globalization_DateTimeFormatInfoScanner_TypeInfo,1);
LAB_01878294:
        (*(code *)*puVar6)(param_2,uVar8,uVar9,puVar6[1]);
      }
    }
    uVar13 = (**(code **)(*param_3 + 0x288))(param_3,*(undefined8 *)(*param_3 + 0x290));
  } while ((uVar13 & 1) != 0);
  FUN_0188082c(param_1,param_3,param_4,plVar7,
               *(undefined8 *)Method_Sirenix_Serialization_ProperBitConverter_GetBytes__);
LAB_0187856c:
  FUN_01880600(param_1,param_3,param_4,plVar7);
  return plVar7;
}


