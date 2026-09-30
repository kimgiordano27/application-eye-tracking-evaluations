/*
FUNCTION_NAME: FUN_05aa428c
ENTRY_POINT: 05aa428c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_17;telemetry_or_network_hits_3
*/


void FUN_05aa428c(long param_1)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_a8;
  long local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long local_78;
  
  puVar3 = Method_System_Collections_Generic_Dictionary<int,_Encoding>_Add__;
  if ((DAT_06b8162d & 1) == 0) {
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_Encoding>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_Encoding>_TryGetValue__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_FontAsset>__ctor__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<int,_FontAsset>_Add__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(
                Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRBoundingBoxSubsystem,_XRBoundingBoxSubsystemDescriptor,_XRBoundingBoxSubsystem_Provider,_XRBoundingBox,_ARBoundingBox>__ctor__
                );
    FUN_02d6084c(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    DAT_06b8162d = 1;
  }
  local_78 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_a8 = 0;
  plVar11 = (long *)FUN_0337fb40(param_1,*(undefined8 *)puVar3);
  if (plVar11 == (long *)0x0) goto LAB_05aa4640;
  plVar12 = (long *)(**(code **)(*plVar11 + 0x198))(plVar11,*(undefined8 *)(*plVar11 + 0x1a0));
  fVar2 = DAT_01208378;
  if (plVar12 == (long *)0x0) {
LAB_05aa4384:
    plVar12 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                     + 0x130);
    if (*(byte *)(*plVar12 + 0x130) < bVar1) goto LAB_05aa4384;
    if (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
       ) {
      plVar12 = (long *)0x0;
    }
  }
  fVar19 = *(float *)(param_1 + 0x80);
  fVar20 = fVar19;
  if (DAT_01208378 <= fVar19) {
    fVar20 = fVar19 + DAT_012085a8;
    *(float *)(param_1 + 0x80) = fVar20;
  }
  fVar18 = (float)FUN_06074fe4(0);
  *(float *)(param_1 + 0x80) = fVar20 + fVar18;
  puVar7 = Method_System_Collections_Generic_Dictionary<int,_FontAsset>_Add__;
  puVar6 = Method_System_Collections_Generic_Dictionary<int,_FontAsset>__ctor__;
  puVar5 = Method_System_Collections_Generic_Dictionary<int,_Encoding>_TryGetValue__;
  puVar4 = 
  Method_UnityEngine_XR_ARFoundation_ARTrackableManager<XRBoundingBoxSubsystem,_XRBoundingBoxSubsystemDescriptor,_XRBoundingBoxSubsystem_Provider,_XRBoundingBox,_ARBoundingBox>__ctor__
  ;
  puVar3 = PTR_DAT_0675e1b8;
  lVar13 = plVar11[9];
  if (lVar13 != 0) {
    iVar16 = 0;
    do {
      iVar9 = FUN_03ec2f04(lVar13,*(undefined8 *)puVar4);
      if (iVar9 <= iVar16) {
        lVar13 = FUN_05aa3f9c(param_1,0);
        puVar3 = Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__;
        if (lVar13 != 0) {
          lVar13 = FUN_033f3478(lVar13,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<int,_List<int>>__ctor__
                               );
          lVar15 = plVar11[9];
          if (lVar15 != 0) {
            lVar17 = 0;
            iVar16 = 0;
            goto LAB_05aa455c;
          }
        }
        break;
      }
      uVar14 = FUN_05aa40cc(param_1,iVar16,&local_78);
      if ((uVar14 & 1) != 0) {
        uVar10 = FUN_05aa4158(uVar14,plVar12,iVar16,local_78);
        lVar13 = local_78;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar3);
        }
        uVar14 = FUN_0606a004(lVar13,0,0);
        if ((uVar14 & 1) != 0) {
          if (local_78 == 0) break;
          FUN_0606a4d0(local_78,uVar10 & 1,0);
        }
        if (fVar2 <= fVar19 && ((uVar10 ^ 0xffffffff) & 1) == 0) {
          if (local_78 == 0) break;
          uVar14 = FUN_033f466c(local_78,&local_88,*(undefined8 *)puVar5);
          if ((uVar14 & 1) != 0) {
            if (local_88 == 0) break;
            FUN_05a9fdf8();
          }
          if (local_78 == 0) break;
          uVar14 = FUN_033f466c(local_78,&local_90,*(undefined8 *)puVar7);
          if ((uVar14 & 1) != 0) {
            if (local_90 == (long *)0x0) break;
            (**(code **)(*local_90 + 0x208))(local_90,*(undefined8 *)(*local_90 + 0x210));
          }
          if (local_78 == 0) break;
          uVar14 = FUN_033f466c(local_78,&local_98,*(undefined8 *)puVar6);
          if ((uVar14 & 1) != 0) {
            if (local_98 == (long *)0x0) break;
            (**(code **)(*local_98 + 0x208))(local_98,*(undefined8 *)(*local_98 + 0x210));
          }
        }
      }
      lVar13 = plVar11[9];
      iVar16 = iVar16 + 1;
    } while (lVar13 != 0);
  }
LAB_05aa4640:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
  while( true ) {
    *(long *)(lVar13 + 0x48) = lVar17;
    thunk_FUN_02dd37b4((long *)(lVar13 + 0x48),lVar17);
    uVar14 = FUN_05aa40cc(param_1,iVar16,&local_a0);
    if ((uVar14 & 1) == 0) {
      iVar16 = iVar16 + 1;
    }
    else {
      uVar14 = FUN_05aa4158(uVar14,plVar12,iVar16,local_a0);
      lVar15 = plVar11[9];
      lVar8 = lVar13;
      if ((uVar14 & 1) == 0) {
        lVar8 = lVar17;
      }
      while( true ) {
        lVar17 = lVar8;
        if (lVar15 == 0) goto LAB_05aa4640;
        iVar16 = iVar16 + 1;
        iVar9 = FUN_03ec2f04(lVar15,*(undefined8 *)puVar4);
        if (iVar9 <= iVar16) {
          *(undefined8 *)(lVar13 + 0x50) = 0;
          thunk_FUN_02dd37b4((undefined8 *)(lVar13 + 0x50),0);
          return;
        }
        uVar14 = FUN_05aa40cc(param_1,iVar16,&local_a8);
        if (((uVar14 & 1) != 0) &&
           (uVar14 = FUN_05aa4158(uVar14,plVar12,iVar16,local_a8), (uVar14 & 1) != 0)) break;
        lVar15 = plVar11[9];
        lVar8 = lVar17;
      }
      if (local_a0 == 0) break;
      lVar15 = FUN_033f3478(local_a0,*(undefined8 *)puVar3);
      *(long *)(lVar13 + 0x50) = lVar15;
      thunk_FUN_02dd37b4((long *)(lVar13 + 0x50),lVar15);
      lVar13 = lVar15;
    }
    lVar15 = plVar11[9];
    if (lVar15 == 0) break;
LAB_05aa455c:
    iVar9 = FUN_03ec2f04(lVar15,*(undefined8 *)puVar4);
    if (iVar9 <= iVar16) {
      return;
    }
    if (lVar13 == 0) break;
  }
  goto LAB_05aa4640;
}


