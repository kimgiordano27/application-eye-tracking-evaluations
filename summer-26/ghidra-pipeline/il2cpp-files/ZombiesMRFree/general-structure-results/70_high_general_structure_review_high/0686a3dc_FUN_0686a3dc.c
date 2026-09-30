/*
FUNCTION_NAME: FUN_0686a3dc
ENTRY_POINT: 0686a3dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_0686a3dc(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong local_70;
  long *local_68;
  
                    /* try { // try from 0686a3f8 to 0696a403 has its CatchHandler @ 0686a814 */
  if ((DAT_073a1cfb & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f6d900);
    FUN_02fe925c(PTR_DAT_06f7a4f8);
    FUN_02fe925c(System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6d848);
    FUN_02fe925c(Unity_VisualScripting_FieldsCloner_TypeInfo);
    FUN_02fe925c(System_IO_FileAccess_TypeInfo);
    FUN_02fe925c(System_Resources_FileBasedResourceGroveler_TypeInfo);
    FUN_02fe925c(System_IO_FileInfo_TypeInfo);
    FUN_02fe925c(System_IO_FileLoadException_TypeInfo);
    FUN_02fe925c(System_IO_FileMode_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(PTR_DAT_06f80870);
    FUN_02fe925c(PTR_DAT_06f7a4d8);
    FUN_02fe925c(PTR_DAT_06f6d6a0);
    FUN_02fe925c(System_IO_FileNotFoundException_TypeInfo);
    FUN_02fe925c(System_IO_FileStream_TypeInfo);
    FUN_02fe925c(System_IO_FileStreamAsyncResult_TypeInfo);
    FUN_02fe925c(System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f80920);
    FUN_02fe925c(PTR_DAT_06f72560);
    FUN_02fe925c(PTR_DAT_06fc33c0);
    FUN_02fe925c(PTR_DAT_06fc33d0);
    FUN_02fe925c(System_IO_Enumeration_FileSystemName_TypeInfo);
    FUN_02fe925c(FallDetection_TypeInfo);
    FUN_02fe925c(System_Net_FileWebRequest_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9a740);
    DAT_073a1cfb = 1;
  }
  local_68 = (long *)0x0;
  if (param_2 != 0) {
    uVar8 = FUN_0686edbc(param_2,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = FUN_0686ed14(param_2,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = FUN_0686ee64(param_2,0);
        local_70 = CONCAT44(local_70._4_4_,uVar7);
        uVar20 = thunk_FUN_0301043c(*(undefined8 *)FallDetection_TypeInfo,&local_70);
        uVar20 = FUN_059725f8(*(undefined8 *)System_IO_Enumeration_FileSystemName_TypeInfo,param_4,
                              uVar20,0);
LAB_0686ac7c:
        if (*(int *)(*(long *)PTR_DAT_06f9a740 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f9a740);
        }
        uVar20 = FUN_0686e1bc(uVar20,0);
        return uVar20;
      }
      uVar7 = FUN_0686ed74(param_2,0);
      local_70 = CONCAT44(local_70._4_4_,uVar7);
      uVar20 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_70);
      if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d848);
      }
      uVar20 = FUN_05b23990(param_4,uVar20,0);
      *param_3 = uVar20;
LAB_0686ac38:
      thunk_FUN_03048534(param_3,uVar20);
      puVar1 = PTR_DAT_06f9a740;
      lVar9 = *(long *)PTR_DAT_06f9a740;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar9 = *(long *)puVar1;
      }
      return *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
    }
    lVar9 = FUN_0686ee1c(param_2,0);
    lVar10 = FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6d900,1);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_0686acc8:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      *(undefined2 *)(lVar10 + 0x20) = 0x2c;
      if ((lVar9 != 0) &&
         (lVar9 = FUN_059744d4(lVar9,lVar10,1,0),
         puVar1 = System_IO_Enumeration_FileSystemEnumerableFactory_TypeInfo, lVar9 != 0)) {
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          lVar25 = 0;
          uVar8 = 0;
          uVar16 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          lVar10 = lVar9 + 0x20;
          puVar18 = (undefined8 *)System_Net_FileWebRequest_TypeInfo;
          plVar13 = (long *)PTR_DAT_06f6d848;
          do {
            if (uVar16 <= uVar8) goto LAB_0686acc8;
            uVar20 = *(undefined8 *)(lVar10 + uVar8 * 8);
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar11 = FUN_05b24194(param_4,0);
            uVar16 = FUN_03e89f40(uVar11,uVar20,*puVar18);
            if ((uVar16 & 1) == 0) {
              if (*(int *)(*plVar13 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar11 = FUN_05b24068(param_4,0);
              uVar11 = FUN_03c25300(uVar11,*(undefined8 *)
                                            Unity_VisualScripting_FieldsCloner_TypeInfo);
              lVar17 = *(long *)puVar1;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(lVar17);
                lVar17 = *(long *)puVar1;
              }
              lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 8);
              if (lVar21 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0(lVar17);
                  lVar17 = *(long *)puVar1;
                }
                uVar22 = **(undefined8 **)(lVar17 + 0xb8);
                lVar21 = thunk_FUN_0301080c(*(undefined8 *)System_IO_FileMode_TypeInfo);
                FUN_057fb854(lVar21,uVar22,*(undefined8 *)System_IO_FileNotFoundException_TypeInfo,0
                            );
                plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
                *plVar12 = lVar21;
                thunk_FUN_03048534(plVar12,lVar21);
              }
              uVar11 = FUN_03c4b3cc(uVar11,lVar21,*(undefined8 *)System_IO_FileAccess_TypeInfo);
              lVar17 = *(long *)puVar1;
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(lVar17);
                lVar17 = *(long *)puVar1;
              }
              lVar21 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
              if (lVar21 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0(lVar17);
                  lVar17 = *(long *)puVar1;
                }
                uVar22 = **(undefined8 **)(lVar17 + 0xb8);
                lVar21 = thunk_FUN_0301080c(*(undefined8 *)System_IO_FileInfo_TypeInfo);
                FUN_057f5c54(lVar21,uVar22,*(undefined8 *)System_IO_FileStream_TypeInfo,0);
                plVar12 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
                *plVar12 = lVar21;
                thunk_FUN_03048534(plVar12,lVar21);
                lVar17 = *(long *)puVar1;
              }
              if (*(int *)(lVar17 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(lVar17);
                lVar17 = *(long *)puVar1;
              }
              lVar23 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
              if (lVar23 == 0) {
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_02fdcff0(lVar17);
                  lVar17 = *(long *)puVar1;
                }
                uVar22 = **(undefined8 **)(lVar17 + 0xb8);
                lVar23 = thunk_FUN_0301080c(*(undefined8 *)System_IO_FileLoadException_TypeInfo);
                FUN_057f5c54(lVar23,uVar22,*(undefined8 *)System_IO_FileStreamAsyncResult_TypeInfo,0
                            );
                plVar13 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
                *plVar13 = lVar23;
                thunk_FUN_03048534(plVar13,lVar23);
                plVar13 = (long *)PTR_DAT_06f6d848;
              }
              lVar17 = FUN_03c50d3c(uVar11,lVar21,lVar23,
                                    *(undefined8 *)
                                     System_Resources_FileBasedResourceGroveler_TypeInfo);
              if (lVar17 == 0) goto UnityEngine_RelativeJoint2D__get_correctionScale;
              uVar16 = FUN_052be160(lVar17,uVar20,&local_68,
                                    *(undefined8 *)
                                     System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo);
              puVar18 = (undefined8 *)System_Net_FileWebRequest_TypeInfo;
              if ((uVar16 & 1) == 0) {
                uVar11 = *(undefined8 *)PTR_DAT_06fc33d0;
                uVar22 = *(undefined8 *)PTR_DAT_06fc33c0;
                if (param_4 == (long *)0x0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (**(code **)(*param_4 + 0x168))
                                     (param_4,*(undefined8 *)(*param_4 + 0x170));
                }
                uVar20 = FUN_059721e8(uVar22,uVar20,uVar11,uVar15,0);
                goto LAB_0686ac7c;
              }
              if (local_68 == (long *)0x0) goto UnityEngine_RelativeJoint2D__get_correctionScale;
              uVar20 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170))
              ;
              if (*(uint *)(lVar9 + 0x18) <= uVar8) goto LAB_0686acc8;
              *(undefined8 *)(lVar10 + uVar8 * 8) = uVar20;
              thunk_FUN_03048534(lVar10 + lVar25,uVar20);
            }
            uVar16 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar8 = uVar8 + 1;
            lVar25 = lVar25 + 8;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar20 = FUN_05b238cc(param_4,0);
        puVar6 = PTR_DAT_06f80920;
        puVar1 = PTR_DAT_06f6d6a0;
        uVar11 = *(undefined8 *)PTR_DAT_06f80920;
        if (*(int *)(*(long *)PTR_DAT_06f6d6a0 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d6a0);
        }
        uVar11 = FUN_05afde1c(uVar11,0);
        uVar8 = FUN_05b0716c(uVar20,uVar11,0);
        puVar5 = PTR_DAT_06f80870;
        puVar4 = PTR_DAT_06f7a4f8;
        puVar3 = PTR_DAT_06f7a4d8;
        puVar2 = PTR_DAT_06f72560;
        uVar16 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
        iVar19 = (int)*(ulong *)(lVar9 + 0x18);
        if ((uVar8 & 1) == 0) {
          if (iVar19 < 1) {
            puVar18 = (undefined8 *)PTR_DAT_06f7a4d8;
            local_70 = 0;
          }
          else {
            uVar8 = 0;
            uVar24 = 0;
            do {
              if (uVar16 <= uVar8) goto LAB_0686acc8;
              uVar20 = *(undefined8 *)(lVar9 + 0x20 + uVar8 * 8);
              if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
                thunk_FUN_02fdcff0();
              }
              uVar20 = FUN_05b22e6c(param_4,uVar20,0);
              lVar10 = *(long *)puVar1;
              uVar11 = *(undefined8 *)puVar5;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(lVar10);
              }
              uVar11 = FUN_05afde1c(uVar11,0);
              lVar10 = *(long *)puVar4;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_02fdcff0(lVar10);
              }
              plVar13 = (long *)FUN_05a6d944(uVar20,uVar11,0);
              if (plVar13 == (long *)0x0) goto UnityEngine_RelativeJoint2D__get_correctionScale;
              if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar3 + 0x40))
              goto LAB_0686acd0;
              puVar14 = (ulong *)thunk_FUN_03010960();
              uVar16 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar8 = uVar8 + 1;
              uVar24 = *puVar14 | uVar24;
              puVar18 = (undefined8 *)PTR_DAT_06f7a4d8;
              local_70 = uVar24;
            } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
        }
        else if (iVar19 < 1) {
          puVar18 = (undefined8 *)PTR_DAT_06f72560;
          local_70 = 0;
        }
        else {
          uVar8 = 0;
          uVar24 = 0;
          do {
            if (uVar16 <= uVar8) goto LAB_0686acc8;
            uVar20 = *(undefined8 *)(lVar9 + 0x20 + uVar8 * 8);
            if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
              thunk_FUN_02fdcff0();
            }
            uVar20 = FUN_05b22e6c(param_4,uVar20,0);
            lVar10 = *(long *)puVar1;
            uVar11 = *(undefined8 *)puVar6;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(lVar10);
            }
            uVar11 = FUN_05afde1c(uVar11,0);
            lVar10 = *(long *)puVar4;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_02fdcff0(lVar10);
            }
            plVar13 = (long *)FUN_05a6d944(uVar20,uVar11,0);
            if (plVar13 == (long *)0x0) goto UnityEngine_RelativeJoint2D__get_correctionScale;
            if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar2 + 0x40)) {
LAB_0686acd0:
                    /* WARNING: Subroutine does not return */
              FUN_02fe9884();
            }
            puVar14 = (ulong *)thunk_FUN_03010960();
            uVar16 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar8 = uVar8 + 1;
            uVar24 = *puVar14 | uVar24;
            puVar18 = (undefined8 *)PTR_DAT_06f72560;
            local_70 = uVar24;
          } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
        uVar20 = thunk_FUN_0301043c(*puVar18,&local_70);
        if (*(int *)(*(long *)PTR_DAT_06f6d848 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d848);
        }
        uVar20 = FUN_05b23990(param_4,uVar20,0);
        *param_3 = uVar20;
        goto LAB_0686ac38;
      }
    }
  }
UnityEngine_RelativeJoint2D__get_correctionScale:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


