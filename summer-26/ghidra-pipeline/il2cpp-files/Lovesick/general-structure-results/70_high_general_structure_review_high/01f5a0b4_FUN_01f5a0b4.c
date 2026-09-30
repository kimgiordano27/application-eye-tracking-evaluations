/*
FUNCTION_NAME: FUN_01f5a0b4
ENTRY_POINT: 01f5a0b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_01f5a0b4(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  
  if ((DAT_037803b2 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_<>c_<EnsureFacesAreComposedOfContiguousTriangles>b__4_1__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Mesh_SetIndices<ushort>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Color>_get_Count__);
    thunk_FUN_00d48444(StringLiteral_529);
    thunk_FUN_00d48444(StringLiteral_10543);
    thunk_FUN_00d48444(StringLiteral_1962);
    DAT_037803b2 = 1;
  }
  puVar5 = StringLiteral_10543;
  if ((param_2 == 0) || (*(char *)(param_1 + 0x55) != '\0')) {
    return 0;
  }
  uVar8 = thunk_FUN_015fe514(param_2,*(undefined8 *)StringLiteral_529,0);
  if ((uVar8 & 1) == 0) {
    uVar8 = thunk_FUN_015fe514(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_List<Color>_get_Count__,0)
    ;
    puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
    if ((uVar8 & 1) == 0) {
      uVar8 = thunk_FUN_015fe514(param_2,**(undefined8 **)
                                           (*(long *)
                                             System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                                           + 0xb8),0);
      puVar4 = 
      Method_UnityEngine_ProBuilder_MeshOperations_MeshValidation_<>c_<EnsureFacesAreComposedOfContiguousTriangles>b__4_1__
      ;
      puVar3 = Method_UnityEngine_Mesh_SetIndices<ushort>__;
      if ((uVar8 & 1) != 0) {
LAB_01f5a1fc:
        return **(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      plVar9 = *(long **)(param_1 + 0x10);
      if (plVar9 == (long *)0x0) {
        return 0;
      }
      do {
        iVar6 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        if (iVar6 == 1) {
          lVar14 = *plVar9;
          bVar1 = *(byte *)(*(long *)puVar3 + 300);
          if ((*(byte *)(lVar14 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_01f5a470:
                    /* WARNING: Subroutine does not return */
            FUN_00da544c(plVar9);
          }
          uVar8 = (**(code **)(lVar14 + 0x4b8))(plVar9,*(undefined8 *)(lVar14 + 0x4c0));
          if ((uVar8 & 1) != 0) {
            plVar10 = (long *)(**(code **)(*plVar9 + 0x218))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x220));
            if (plVar10 == (long *)0x0) goto LAB_01f5a46c;
            iVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
            if (0 < iVar6) {
              iVar6 = 0;
              do {
                plVar11 = (long *)FUN_01f45a80(plVar10,iVar6,0);
                if (plVar11 == (long *)0x0) goto LAB_01f5a46c;
                uVar13 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                uVar8 = thunk_FUN_015fe514(uVar13,param_2,0);
                if ((uVar8 & 1) != 0) {
                  lVar14 = (**(code **)(*plVar11 + 0x358))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x360));
                  if (lVar14 == 0) goto LAB_01f5a46c;
                  if (*(int *)(lVar14 + 0x10) == 0) {
                    uVar13 = (**(code **)(*plVar11 + 0x378))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x380));
                    uVar8 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar5,0);
                    if ((uVar8 & 1) != 0) {
                      uVar13 = FUN_01f59cd0(param_1,**(undefined8 **)(*(long *)puVar2 + 0xb8));
                      uVar8 = thunk_FUN_015fe514(uVar13,param_2,0);
                      if ((uVar8 & 1) == 0) goto LAB_01f5a3a8;
                      goto LAB_01f5a1fc;
                    }
                  }
                  uVar13 = (**(code **)(*plVar11 + 0x358))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x360));
                  uVar8 = thunk_FUN_015fe514(uVar13,*(undefined8 *)puVar5,0);
                  if ((uVar8 & 1) != 0) {
                    uVar13 = (**(code **)(*plVar11 + 0x378))
                                       (plVar11,*(undefined8 *)(*plVar11 + 0x380));
                    uVar12 = FUN_01f59cd0(param_1,uVar13);
                    uVar8 = thunk_FUN_015fe514(uVar12,param_2,0);
                    if ((uVar8 & 1) != 0) {
                      plVar9 = *(long **)(param_1 + 0x30);
                      if (plVar9 == (long *)0x0) goto LAB_01f5a46c;
                      lVar14 = *plVar9;
                      goto LAB_01f5a1b8;
                    }
                  }
                }
LAB_01f5a3a8:
                iVar6 = iVar6 + 1;
                iVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
              } while (iVar6 < iVar7);
            }
          }
System_Net_CommandStream__InvokeRequestCallback:
          pcVar15 = *(code **)(*plVar9 + 0x1d8);
          uVar13 = *(undefined8 *)(*plVar9 + 0x1e0);
        }
        else {
          iVar6 = (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
          if (iVar6 != 2) goto System_Net_CommandStream__InvokeRequestCallback;
          lVar14 = *plVar9;
          bVar1 = *(byte *)(*(long *)puVar4 + 300);
          if ((*(byte *)(lVar14 + 300) < bVar1) ||
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
          goto LAB_01f5a470;
          pcVar15 = *(code **)(lVar14 + 0x4c8);
          uVar13 = *(undefined8 *)(lVar14 + 0x4d0);
        }
        plVar9 = (long *)(*pcVar15)(plVar9,uVar13);
        if (plVar9 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    plVar9 = *(long **)(param_1 + 0x30);
    if (plVar9 == (long *)0x0) goto LAB_01f5a46c;
    lVar14 = *plVar9;
    uVar13 = *(undefined8 *)StringLiteral_1962;
  }
  else {
    plVar9 = *(long **)(param_1 + 0x30);
    if (plVar9 == (long *)0x0) {
LAB_01f5a46c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar14 = *plVar9;
    uVar13 = *(undefined8 *)puVar5;
  }
LAB_01f5a1b8:
                    /* WARNING: Could not recover jumptable at 0x01f5a1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar13 = (**(code **)(lVar14 + 0x198))(plVar9,uVar13,*(undefined8 *)(lVar14 + 0x1a0));
  return uVar13;
}


