/*
FUNCTION_NAME: FUN_03891008
ENTRY_POINT: 03891008
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_03891008(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  uint local_6c;
  undefined8 local_68;
  
  if ((DAT_045394d6 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__);
    FUN_01c5d288(PTR_DAT_04237260);
    FUN_01c5d288(PTR_DAT_04230940);
    FUN_01c5d288(Method_System_Collections_Generic_List<Action<Texture>>__ctor__);
    FUN_01c5d288(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_01c5d288(Method_System_Data_Common_ObjectStorage_Set__);
    FUN_01c5d288(PTR_DAT_04231e58);
    FUN_01c5d288(Method_System_Data_Common_ObjectStorage_VerifyIDynamicMetaObjectProvider__);
    FUN_01c5d288(Method_Oculus_Platform_Models_DeserializableList<SdkAccount>__ctor__);
    DAT_045394d6 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  uVar11 = FUN_031532a8(param_1,0);
  if ((uVar11 & 1) != 0) {
    return param_1;
  }
  if (param_1 == 0) goto LAB_038919c0;
  iVar2 = *(int *)(param_1 + 0x10);
  iVar7 = FUN_031572ac(param_1,0x5f,0);
  puVar4 = Method_System_Collections_Generic_List<Action<Texture>>__ctor__;
  if (iVar7 < 0) {
    plVar13 = (long *)0x0;
    goto LAB_03891270;
  }
  lVar12 = *(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar12 = *(long *)puVar4;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  thunk_FUN_01c21c38();
  if (lVar12 == 0) {
    uVar17 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04237260);
    FUN_03957a68(uVar17,*(undefined8 *)Method_System_Data_Common_ObjectStorage_Set__,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    thunk_FUN_01c21c38();
    lVar12 = *(long *)puVar4;
    *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x18) = uVar17;
  }
  else {
    lVar12 = *(long *)puVar4;
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar12 = *(long *)puVar4;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
  thunk_FUN_01c21c38();
  if ((lVar12 == 0) || (lVar12 = FUN_0395638c(lVar12,param_1,iVar7,0), lVar12 == 0))
  goto LAB_038919c0;
  plVar13 = (long *)FUN_039544e8(lVar12,0);
  puVar4 = PTR_DAT_04230960;
  if (plVar13 == (long *)0x0) {
LAB_03891270:
    iVar7 = -1;
    if ((param_2 & 1) == 0) goto LAB_0389150c;
LAB_03891278:
    puVar4 = Method_System_Collections_Generic_List<Action<Texture>>__ctor__;
    if (*(int *)(*(long *)Method_System_Collections_Generic_List<Action<Texture>>__ctor__ + 0xe0) ==
        0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_0314e438(param_1,0,0);
    uVar11 = FUN_03890774(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar9);
    if (((uVar9 & 0xffff) == 0x5f) || ((uVar11 & 1) != 0)) {
      if (iVar7 == 0) goto LAB_038912f0;
      goto LAB_0389150c;
    }
    if ((((param_3 & 1) == 0) && (sVar6 = FUN_0314e438(param_1,0,0), iVar7 != 0)) && (sVar6 == 0x3a)
       ) goto LAB_0389150c;
LAB_038912f0:
    plVar15 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230940);
    FUN_0315aa88(plVar15,iVar2 + 0x14,0);
    if (plVar15 == (long *)0x0) goto LAB_038919c0;
    FUN_0315ab48(plVar15,*(undefined8 *)
                          Method_System_Data_Common_ObjectStorage_VerifyIDynamicMetaObjectProvider__
                 ,0);
    if (((iVar2 < 2) || (uVar9 = FUN_0314e438(param_1,0,0), (uVar9 >> 10 & 0x3f) != 0x36)) ||
       (uVar9 = FUN_0314e438(param_1,1,0), (uVar9 >> 10 & 0x3f) != 0x37)) {
      uVar8 = FUN_0314e438(param_1,0,0);
      local_68 = CONCAT44(local_68._4_4_,uVar8) & 0xffffffff0000ffff;
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
      }
      iVar19 = 1;
      puVar14 = &local_68;
      puVar21 = (undefined8 *)Method_Oculus_Platform_Models_DeserializableList<SdkAccount>__ctor__;
    }
    else {
      uVar9 = FUN_0314e438(param_1,0,0);
      uVar10 = FUN_0314e438(param_1,1,0);
      local_68 = CONCAT44((uVar9 & 0xffff) * 0x400 + 0xfca10000 | (uVar10 & 0xffff) - 0xdc00,
                          (undefined4)local_68);
      if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      iVar19 = 2;
      puVar14 = (undefined8 *)((long)&local_68 + 4);
      puVar21 = (undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo;
    }
    uVar17 = FUN_03295500(0);
    uVar17 = FUN_032cf4e4(puVar14,*puVar21,uVar17,0);
    FUN_0315ab48(plVar15,uVar17,0);
    FUN_0315ab48(plVar15,*(undefined8 *)PTR_DAT_04231e58,0);
    puVar4 = PTR_DAT_04230960;
    if (iVar7 == 0) {
      if (plVar13 == (long *)0x0) goto LAB_038919c0;
      lVar12 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
            puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_03891908;
          }
          uVar11 = uVar11 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar11 != 0);
      }
      puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,0);
LAB_03891908:
      uVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
      if ((uVar11 & 1) == 0) {
        iVar7 = 0;
      }
      else {
        lVar12 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar11 != 0) {
          piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
              puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_03891970;
            }
            uVar11 = uVar11 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar4,1);
LAB_03891970:
        plVar16 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
        if (plVar16 == (long *)0x0) goto LAB_038919c0;
        bVar3 = *(byte *)(*(long *)Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__ +
                         0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__)) {
System_ComponentModel_DataObjectAttribute__IsDefaultAttribute:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
        iVar7 = (int)plVar16[2] + -1;
      }
    }
  }
  else {
    lVar12 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
          puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
          goto System_ComponentModel_CustomTypeDescriptor__GetDefaultEvent;
        }
        uVar11 = uVar11 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,0);
System_ComponentModel_CustomTypeDescriptor__GetDefaultEvent:
    uVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
    if ((uVar11 & 1) == 0) goto LAB_03891270;
    lVar12 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar11 != 0) {
      piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
          puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_038914bc;
        }
        uVar11 = uVar11 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar11 != 0);
    }
    puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)puVar4,1);
LAB_038914bc:
    plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
    if (plVar15 == (long *)0x0) goto LAB_038919c0;
    bVar3 = *(byte *)(*(long *)Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__ + 0x130)
    ;
    if ((*(byte *)(*plVar15 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__))
    goto System_ComponentModel_DataObjectAttribute__IsDefaultAttribute;
    iVar7 = (int)plVar15[2] + -1;
    if ((param_2 & 1) != 0) goto LAB_03891278;
LAB_0389150c:
    iVar19 = 0;
    plVar15 = (long *)0x0;
  }
  puVar5 = Method_System_Collections_Generic_List<Action<Texture>>__ctor__;
  puVar4 = PTR_DAT_04231e58;
  if (iVar19 < iVar2) {
    iVar20 = iVar19;
    do {
      if ((param_3 & 1) == 0) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_0314e438(param_1,iVar20,0);
        uVar11 = FUN_038907a8(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar9);
        if ((iVar7 == iVar20) || ((uVar9 & 0xffff) != 0x3a && (uVar11 & 1) == 0)) goto LAB_038915c8;
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar8 = FUN_0314e438(param_1,iVar20,0);
        uVar11 = FUN_038907a8(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar8);
        if ((iVar7 == iVar20) || ((uVar11 & 1) == 0)) {
LAB_038915c8:
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_04230940);
            FUN_0315aa88(plVar15,iVar2 + 0x14,0);
          }
          if (iVar7 == iVar20) {
            if (plVar13 == (long *)0x0) goto LAB_038919c0;
            lVar12 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar11 != 0) {
              piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_0389164c;
                }
                uVar11 = uVar11 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar11 != 0);
            }
            puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,0);
LAB_0389164c:
            uVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
            iVar7 = iVar20;
            if ((uVar11 & 1) != 0) {
              lVar12 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar11 != 0) {
                piVar18 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04230960) {
                    puVar14 = (undefined8 *)(lVar12 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                    goto LAB_038916b8;
                  }
                  uVar11 = uVar11 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar11 != 0);
              }
              puVar14 = (undefined8 *)FUN_01c72498(plVar13,*(long *)PTR_DAT_04230960,1);
LAB_038916b8:
              plVar16 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
              if (plVar16 == (long *)0x0) goto LAB_038919c0;
              bVar3 = *(byte *)(*(long *)
                                 Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__ +
                               0x130);
              if ((*(byte *)(*plVar16 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)Method_System_Data_Common_ObjectStorage_ConvertXmlToObject__))
              goto System_ComponentModel_DataObjectAttribute__IsDefaultAttribute;
              iVar7 = (int)plVar16[2] + -1;
            }
          }
          if (plVar15 == (long *)0x0) goto LAB_038919c0;
          FUN_03162390(plVar15,param_1,iVar19,iVar20 - iVar19,0);
          FUN_0315ab48(plVar15,*(undefined8 *)
                                Method_System_Data_Common_ObjectStorage_VerifyIDynamicMetaObjectProvider__
                       ,0);
          iVar1 = iVar20 + 1;
          if (((iVar1 < iVar2) &&
              (uVar9 = FUN_0314e438(param_1,iVar20,0), (uVar9 >> 10 & 0x3f) == 0x36)) &&
             (uVar9 = FUN_0314e438(param_1,iVar1,0), (uVar9 >> 10 & 0x3f) == 0x37)) {
            uVar9 = FUN_0314e438(param_1,iVar20,0);
            uVar10 = FUN_0314e438(param_1,iVar1,0);
            local_6c = (uVar9 & 0xffff) * 0x400 + 0xfca10000 | (uVar10 & 0xffff) - 0xdc00;
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar17 = FUN_03295500(0);
            uVar17 = FUN_032cf4e4(&local_6c,*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo,uVar17,0);
            FUN_0315ab48(plVar15,uVar17,0);
            iVar19 = iVar20 + 2;
            iVar20 = iVar1;
          }
          else {
            uVar8 = FUN_0314e438(param_1,iVar20,0);
            local_68 = CONCAT44(local_68._4_4_,uVar8) & 0xffffffff0000ffff;
            if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
            }
            uVar17 = FUN_03295500(0);
            uVar17 = FUN_032cf4e4(&local_68,
                                  *(undefined8 *)
                                   Method_Oculus_Platform_Models_DeserializableList<SdkAccount>__ctor__
                                  ,uVar17,0);
            FUN_0315ab48(plVar15,uVar17,0);
            iVar19 = iVar1;
          }
          FUN_0315ab48(plVar15,*(undefined8 *)puVar4,0);
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar2);
  }
  if (iVar19 != 0) {
    if (iVar2 - iVar19 == 0 || iVar2 < iVar19) {
      if (plVar15 == (long *)0x0) goto LAB_038919c0;
    }
    else {
      if (plVar15 == (long *)0x0) {
LAB_038919c0:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_03162390(plVar15,param_1,iVar19,iVar2 - iVar19,0);
    }
    param_1 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
  }
  return param_1;
}


