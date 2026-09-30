/*
FUNCTION_NAME: FUN_070310a4
ENTRY_POINT: 070310a4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_21;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x07031d9c) */
/* WARNING: Removing unreachable block (ram,0x07031b3c) */
/* WARNING: Removing unreachable block (ram,0x07031ff8) */
/* WARNING: Removing unreachable block (ram,0x07032008) */
/* WARNING: Removing unreachable block (ram,0x0703204c) */
/* WARNING: Removing unreachable block (ram,0x0703205c) */
/* WARNING: Removing unreachable block (ram,0x07031f68) */
/* WARNING: Removing unreachable block (ram,0x07031f78) */
/* WARNING: Removing unreachable block (ram,0x07031c74) */
/* WARNING: Removing unreachable block (ram,0x07032104) */
/* WARNING: Removing unreachable block (ram,0x07032114) */
/* WARNING: Removing unreachable block (ram,0x07031420) */
/* WARNING: Removing unreachable block (ram,0x07031cac) */

void FUN_070310a4(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  long *plVar24;
  undefined1 auVar25 [16];
  ulong local_738;
  undefined1 *puStack_730;
  ulong local_728;
  undefined1 *local_720;
  long local_718;
  long *local_710;
  long local_708;
  long local_700;
  undefined1 local_6f4 [4];
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  long local_6c0;
  undefined1 local_6b4 [4];
  long local_6b0;
  undefined8 local_6a8;
  undefined1 auStack_6a0 [1592];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_6a8 = param_1;
  if ((DAT_07eebdd1 & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_03642964(UnityEngine_TextCore_LanguageDirection_TypeInfo);
    FUN_03642964(Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_70_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_71_0_TypeInfo);
    FUN_03642964(PTR_DAT_079f4540);
    FUN_03642964(PTR_DAT_079f4598);
    FUN_03642964(OVRPlugin_OVRP_1_72_0_TypeInfo);
    FUN_03642964(PTR_DAT_079f4e28);
    FUN_03642964(OVRPlugin_OVRP_1_51_0_TypeInfo);
    FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
    FUN_03642964(Sirenix_Serialization_RectFormatter_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_73_0_TypeInfo);
    FUN_03642964(PTR_DAT_07a006b0);
    FUN_03642964(UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo);
    FUN_03642964(
                System_Runtime_Remoting_Contexts_DynamicPropertyCollection_DynamicPropertyReg_TypeInfo
                );
    FUN_03642964(PTR_DAT_079ff4c8);
    FUN_03642964(Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_74_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_75_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_76_0_TypeInfo);
    DAT_07eebdd1 = 1;
  }
  local_6b0 = 0;
  memset(auStack_6a0,0,0x638);
  puVar3 = PTR_DAT_079ff4c8;
  local_6b4[0] = 0;
  local_6c0 = 0;
  local_6d0 = 0;
  local_6f4[0] = 0;
  uStack_6e8 = 0;
  local_6f0 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  local_708 = 0;
  local_700 = 0;
  if (param_2 != 0) {
    plVar21 = *(long **)(param_2 + 0x1d8);
    lVar22 = *(long *)(param_2 + 0xd8);
    if (plVar21 != (long *)0x0) {
      local_710 = &local_6b0;
      local_6b0 = plVar21[0x27];
      local_718 = 0;
      if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_07032484(param_2,auStack_6a0);
      puVar4 = UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
      if ((uVar11 & 1) != 0) {
        lVar12 = *(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar12 = *(long *)puVar4;
        }
        **(undefined8 **)(lVar12 + 0xb8) = plVar21;
        thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar4 + 0xb8),plVar21);
        lVar12 = *(long *)puVar3;
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar12 = *(long *)puVar3;
        }
        lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
        bVar8 = (**(code **)(*plVar21 + 0x2a8))(plVar21,*(undefined8 *)(*plVar21 + 0x2b0));
        if (lVar12 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        *(byte *)(lVar12 + 0x18) = bVar8 & 1;
        FUN_06fc2f3c(param_2,0);
        if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar12 = FUN_06e90b60(0);
        if (*(long *)(param_2 + 0x1a0) == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        uVar11 = FUN_06e81af8(*(long *)(param_2 + 0x1a0),0);
        lVar14 = 0;
        if ((uVar11 & 1) == 0) {
          lVar14 = lVar12;
        }
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_6_0_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar13 = FUN_07032604(lVar22);
        if (lVar13 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        local_728 = local_728 & 0xffffffffffffff00;
        FUN_06eaa268(&local_728,lVar14,*(undefined8 *)(lVar13 + 0x18),0);
        local_6b4[0] = (undefined1)local_728;
        local_720 = local_6b4;
        local_728 = 0;
        FUN_06fb6c70(plVar21,*(undefined4 *)(param_2 + 0xe8),0);
        lVar14 = *(long *)OVRPlugin_OVRP_1_73_0_TypeInfo;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar14 = *(long *)OVRPlugin_OVRP_1_73_0_TypeInfo;
        }
        local_738 = local_738 & 0xffffffffffffff00;
        FUN_06eaa264(&local_738,**(undefined8 **)(lVar14 + 0xb8),0);
        local_6f4[0] = (undefined1)local_738;
        puStack_730 = local_6f4;
        local_738 = 0;
        local_700 = local_6b0;
        thunk_FUN_036b7ad0(&local_700);
        FUN_06fbbcb8(plVar21,&local_700,0);
        (**(code **)(*plVar21 + 0x228))
                  (plVar21,auStack_6a0,&local_700,*(undefined8 *)(*plVar21 + 0x230));
        FUN_06eaa270(local_6f4,0);
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff388(&local_6a8,lVar12,0);
        if (lVar12 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        FUN_071e8b78(lVar12,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_070327c4(lVar12);
        if (lVar22 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        uVar11 = FUN_03c37834(lVar22,&local_6c0,
                              *(undefined8 *)
                               Zenject_FactoryFromBinderBase_<>c__DisplayClass33_0_TypeInfo);
        if ((uVar11 & 1) == 0) {
LAB_07031540:
          uVar15 = 0;
        }
        else {
          if (local_6c0 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          if (*(long *)(local_6c0 + 0xc0) == 0) goto LAB_07031540;
          uVar15 = FUN_03fbb2ac(*(long *)(local_6c0 + 0xc0),
                                *(undefined8 *)OVRPlugin_OVRP_1_74_0_TypeInfo);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar16 = FUN_0702e180();
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        puVar3 = PTR_DAT_079ff4c8;
        uVar11 = FUN_071c0684(uVar16,0,0);
        if ((uVar11 & 1) == 0) {
          bVar6 = false;
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar14 = FUN_0702e180();
          if (lVar14 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          bVar6 = *(int *)(lVar14 + 0x74) == 1;
        }
        puVar3 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
        if (*(int *)(*(long *)UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo +
                    0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if (DAT_07eeb188 == '\0') {
          FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
          DAT_07eeb188 = '\x01';
        }
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar14 = *(long *)puVar3;
        }
        cVar5 = DAT_07eeb188;
        lVar13 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
        if (lVar13 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        *(bool *)(lVar13 + 0x15a) = bVar6;
        puVar4 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo;
        if (cVar5 == '\0') {
          FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
          lVar14 = *(long *)puVar4;
          DAT_07eeb188 = '\x01';
        }
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar14 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
        if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)PTR_DAT_079ff4c8);
        }
        lVar13 = FUN_0702e180();
        if (lVar13 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        bVar7 = true;
        if (*(int *)(lVar13 + 0x70) != 1) {
          if (*(int *)(*(long *)PTR_DAT_079ff4c8 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar13 = FUN_0702e180();
          if (lVar13 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          bVar7 = *(int *)(lVar13 + 0x70) == 2;
        }
        if (lVar14 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        *(bool *)(lVar14 + 0x15b) = bVar7;
        if (bVar6) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (DAT_07eeb188 == '\0') {
            FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
            DAT_07eeb188 = '\x01';
          }
          lVar14 = *(long *)puVar3;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar14 = *(long *)puVar3;
          }
          lVar13 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar13 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          if (*(char *)(lVar13 + 0x18) != '\0') {
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            if (DAT_07eeb188 == '\0') {
              FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
              DAT_07eeb188 = '\x01';
            }
            lVar14 = *(long *)puVar3;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_036a1978();
              lVar14 = *(long *)puVar3;
            }
            lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
            if (lVar14 == 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              goto LAB_0703247c;
            }
            FUN_06eae6cc(lVar14,0);
            iVar9 = FUN_071742bc(lVar22,0);
            if ((iVar9 != 0x10) && (iVar9 = FUN_071742bc(lVar22,0), iVar9 != 4)) {
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar14 = UnityEngine_AI_NavMeshObstacle__set_size(0);
              if (lVar14 == 0) {
                if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03642c18();
                }
                goto LAB_0703247c;
              }
              FUN_06ebe454(lVar14,lVar12,lVar22,uVar15,0);
            }
          }
        }
        iVar9 = FUN_071742bc(lVar22,0);
        if ((iVar9 == 0x10) || (iVar9 = FUN_071742bc(lVar22,0), iVar9 == 4)) {
          if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_071fdf84(lVar22,0);
        }
        if (bVar6) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          if (DAT_07eeb188 == '\0') {
            FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
            DAT_07eeb188 = '\x01';
          }
          lVar14 = *(long *)puVar3;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar14 = *(long *)puVar3;
          }
          lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
          if (lVar14 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          FUN_06eabb90(lVar14,lVar12,1,0);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        plVar24 = (long *)PTR_DAT_079ff4c8;
        if (DAT_07eeb188 == '\0') {
          FUN_03642964(UnityEngine_Rendering_Universal_MotionVectorsPersistentData_TypeInfo);
          DAT_07eeb188 = '\x01';
        }
        lVar14 = *(long *)puVar3;
        if (*(int *)(lVar14 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar14 = *(long *)puVar3;
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
        uVar16 = FUN_0719d0d8(0);
        if (lVar14 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        FUN_06eb85e8(lVar14,lVar22,uVar15,uVar16,0);
        lVar22 = local_6c0;
        if (*(int *)(*(long *)PTR_DAT_079f4e28 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar11 = FUN_071c0684(lVar22,0,0);
        if ((uVar11 & 1) != 0) {
          if (local_6c0 == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          if (*(long *)(local_6c0 + 0x90) == 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            goto LAB_0703247c;
          }
          FUN_06fc9e98(*(long *)(local_6c0 + 0x90),param_2,0);
        }
        if (*(long *)(param_2 + 0x200) != 0) {
          if (*(int *)(*plVar24 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          FUN_07032bac(param_2);
        }
        uVar10 = *(undefined4 *)(param_2 + 0xf8);
        uVar1 = *(undefined4 *)(param_2 + 0xfc);
        if (*(int *)(*(long *)Sirenix_Serialization_RectFormatter_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06eefbcc(uVar10,uVar1,0);
        if (local_6b0 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        lVar22 = FUN_07043090(local_6b0,*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo);
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        auVar25 = FUN_071ff6b0(&local_6a8,auStack_6a0,0);
        if (lVar22 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
          goto LAB_0703247c;
        }
        pauVar23 = (undefined1 (*) [16])(lVar22 + 0x18);
        *pauVar23 = auVar25;
        local_708 = lVar12;
        thunk_FUN_036b7ad0(&local_708,lVar12);
        FUN_06f5acfc(local_708,0);
        plVar17 = *(long **)(param_2 + 0x1d8);
        if ((plVar17 == (long *)0x0) ||
           (*plVar17 != *(long *)Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<>c_TypeInfo)) {
          uVar11 = 0;
        }
        else {
          uVar10 = FUN_0701c298(plVar17,0);
          local_738 = 0;
          FUN_0493c164(&local_738,uVar10,*(undefined8 *)OVRPlugin_OVRP_1_72_0_TypeInfo);
          uVar11 = local_738;
        }
        puVar3 = OVRPlugin_OVRP_1_51_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_51_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar22 = *(long *)puVar3;
          plVar24 = (long *)PTR_DAT_079ff4c8;
        }
        local_738 = local_738 & 0xffffffffffffff00;
        FUN_06eaa264(&local_738,*(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x18),0);
        lVar22 = local_6b0;
        local_6f4[0] = (undefined1)local_738;
        puStack_730 = local_6f4;
        local_738 = 0;
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_07032cbc(lVar22);
        lVar22 = local_6b0;
        uVar15 = FUN_0702e180();
        auVar25 = FUN_071f9038(pauVar23,0);
        uVar15 = FUN_07032d0c(lVar22,uVar15,auVar25._0_8_,auVar25._8_8_,uVar11);
        lVar22 = local_6b0;
        uVar16 = FUN_0702e180();
        uVar16 = FUN_0703307c(lVar22,uVar16,uVar11);
        lVar22 = local_6b0;
        uVar18 = FUN_0702e180();
        UnityEngine_XR_OpenXR_Features_Interactions_MetaQuestTouchProControllerProfile_QuestProTouchController__get_thumbstickClicked
                  (lVar22,uVar18);
        lVar22 = local_6b0;
        uVar18 = FUN_0702e180();
        FUN_07033f8c(lVar22,uVar18,lVar12,uVar11,*(undefined8 *)(param_2 + 0x1d8));
        FUN_07034100(local_6b0,local_6a8);
        FUN_06eaa270(local_6f4,0);
        FUN_07034170(&local_6f0,local_6b0);
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_0703422c(&local_6f0);
        FUN_07034428(uVar15,uVar16,param_2,pauVar23,&local_6a8);
        FUN_06fbbd7c(plVar21,&local_6f0,0);
        lVar22 = *(long *)(*plVar24 + 0xb8);
        if (*(char *)(lVar22 + 0x18) == '\0') {
          lVar22 = *(long *)OVRPlugin_OVRP_1_73_0_TypeInfo;
          if (*(int *)(lVar22 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar22 = *(long *)OVRPlugin_OVRP_1_73_0_TypeInfo;
            plVar24 = (long *)PTR_DAT_079ff4c8;
          }
          local_738 = local_738 & 0xffffffffffffff00;
          FUN_06eaa264(&local_738,*(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8),0);
          local_6f4[0] = (undefined1)local_738;
          local_738 = 0;
          puStack_730 = local_6f4;
          (**(code **)(*plVar21 + 0x208))
                    (plVar21,local_6a8,&local_6f0,*(undefined8 *)(*plVar21 + 0x210));
          FUN_06eaa270(local_6f4,0);
          FUN_06fb9678(plVar21,local_6a8,&local_6f0,0);
        }
        else {
          if (*(int *)(*plVar24 + 0xe4) == 0) {
            thunk_FUN_036a1978();
            lVar22 = *(long *)(*(long *)PTR_DAT_079ff4c8 + 0xb8);
            plVar24 = (long *)PTR_DAT_079ff4c8;
          }
          FUN_07034550(*(undefined8 *)(lVar22 + 8),local_6a8,plVar21,lVar12);
          FUN_06fb8e58(plVar21,lVar12,0);
        }
        FUN_06eaa270(local_720,0);
        puVar3 = PTR_DAT_07a006b0;
        if (local_728 != 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c00();
          }
          goto LAB_0703247c;
        }
        if (*(int *)(*(long *)PTR_DAT_07a006b0 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff388(&local_6a8,lVar12,0);
        if (*(int *)(*(long *)UnityEngine_TextCore_LanguageDirection_TypeInfo + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_06e90ca0(lVar12,0);
        puVar4 = OVRPlugin_OVRP_1_71_0_TypeInfo;
        lVar22 = *(long *)OVRPlugin_OVRP_1_71_0_TypeInfo;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar22 = *(long *)puVar4;
        }
        local_728 = local_728 & 0xffffffffffffff00;
        FUN_06eaa264(&local_728,**(undefined8 **)(lVar22 + 0xb8),0);
        local_6b4[0] = (undefined1)local_728;
        lVar22 = *plVar24;
        local_720 = local_6b4;
        local_728 = 0;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar22 = *plVar24;
        }
        if ((*(char *)(*(long *)(lVar22 + 0xb8) + 0x18) == '\0') &&
           (*(char *)((long)plVar21 + 0x134) != '\0')) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          uVar11 = FUN_071ff2ac(&local_6a8,0);
          if ((uVar11 & 1) == 0) {
            *(undefined1 *)((long)plVar21 + 0x134) = 0;
            if (lVar12 == 0) {
              if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              goto LAB_0703247c;
            }
            FUN_071ec68c(lVar12,*(long *)(*(long *)
                                           System_Runtime_Remoting_Contexts_DynamicPropertyCollection_DynamicPropertyReg_TypeInfo
                                         + 0xb8) + 0x4c,0,0);
            if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            FUN_07176120(*(undefined8 *)OVRPlugin_OVRP_1_75_0_TypeInfo,0);
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        FUN_071ff238(&local_6a8,0);
        FUN_06eaa270(local_6b4,0);
        puVar3 = UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
        lVar22 = *(long *)UnityEngine_UIElements_HelpBox_UxmlFactory_TypeInfo;
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar22 = *(long *)puVar3;
        }
        **(undefined8 **)(lVar22 + 0xb8) = 0;
        thunk_FUN_036b7ad0(*(undefined8 *)(*(long *)puVar3 + 0xb8),0);
      }
      plVar21 = (long *)*local_710;
      if (plVar21 != (long *)0x0) {
        lVar22 = *plVar21;
        uVar11 = (ulong)*(ushort *)(lVar22 + 0x12e);
        if (uVar11 != 0) {
          piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_079f4598) {
              puVar19 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_07031e3c;
            }
            uVar11 = uVar11 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar11 != 0);
        }
        puVar19 = (undefined8 *)FUN_0367cd30(plVar21,*(long *)PTR_DAT_079f4598,0);
LAB_07031e3c:
        (*(code *)*puVar19)(plVar21,puVar19[1]);
      }
      if (local_718 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
      }
      else if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c00();
      }
      goto LAB_0703247c;
    }
    if (lVar22 != 0) {
      uVar15 = thunk_FUN_071c6398(lVar22,0);
      uVar15 = FUN_05c8e390(*(undefined8 *)OVRPlugin_OVRP_1_76_0_TypeInfo,uVar15,0);
      if (*(int *)(*(long *)PTR_DAT_079f4540 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)PTR_DAT_079f4540);
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        FUN_07176120(uVar15,0);
        return;
      }
      goto LAB_0703247c;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
LAB_0703247c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


