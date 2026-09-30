/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0238df98
PROGRAM: gunraiders-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_19
*/


/* WARNING: Removing unreachable block (ram,0x0238e454) */

void System_Array__IndexOfImpl<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined4 uStack000000000000001c;
  undefined8 uStack0000000000000020;
  long in_stack_00000028;
  
  uStack000000000000001c = param_3;
  uStack0000000000000020 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230960);
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializer_TypeInfo);
    FUN_01c5d288(UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo);
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01c723f0(param_5);
    }
  }
  in_stack_00000028 = 0;
  if (((*(long *)(param_1 + 0x30) == 0) ||
      (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x420), lVar5 == 0)) ||
     (plVar6 = (long *)FUN_03e95388(lVar5,0), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  lVar5 = *plVar6;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) ==
          *(long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo) {
        puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
        goto System_Array__IndexOfImpl<OVRSpatialAnchor_UnboundAnchor>;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01c72498(plVar6,*(long *)
                                Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo,
                        0);
System_Array__IndexOfImpl<OVRSpatialAnchor_UnboundAnchor>:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo;
  puVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo;
  puVar2 = PTR_DAT_04230960;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  iVar14 = 0;
  do {
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0238e130;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar2,0);
LAB_0238e130:
    uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar12 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 == 0) goto LAB_0238e3f8;
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0238e18c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)puVar4,0);
LAB_0238e18c:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x400);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar12 = FUN_0290dfa8(lVar5,uVar8,&stack0x00000028,*(undefined8 *)puVar3);
    if ((uVar12 & 1) != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar5 = FUN_03f1bd64(param_2,iVar14,0);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonSerializer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar9 = (long *)FUN_03f18ae8(lVar5,*(undefined4 *)
                                           (*(long *)(*(long *)
                                                  Newtonsoft_Json_JsonSerializer_TypeInfo + 0xb8) +
                                           4),0);
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo + 0x130);
        if (*(byte *)(*plVar9 + 0x130) < bVar1) {
          plVar9 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)UnityEngine_ResourceManagement_Util_IdCacheKey_TypeInfo) {
          plVar9 = (long *)0x0;
        }
      }
      FUN_0238dd98(plVar9,uStack000000000000001c,uVar8,uStack0000000000000020,
                   *(undefined8 *)(*(long *)(param_5 + 0x38) + 8));
      plVar9 = (long *)FUN_03f0d9bc(lVar5,0);
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      if (*(long *)(in_stack_00000028 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      plVar10 = (long *)FUN_03f06988(*(long *)(in_stack_00000028 + 0x10),0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *plVar10;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x2c) * 0x10 + 0x138);
            goto LAB_0238e2fc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01c72498(plVar10,*(long *)
                                     Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo,0x2c
                           );
LAB_0238e2fc:
      (*(code *)*puVar7)(plVar10,puVar7[1]);
      auVar15 = FUN_03f24884(0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar11 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x36) * 0x10 + 0x138);
            goto LAB_0238e374;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01c72498(plVar9,*(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x36);
LAB_0238e374:
      (*(code *)*puVar7)(plVar9,auVar15._0_8_,auVar15._8_8_ & 0xffffffff,puVar7[1]);
      iVar14 = iVar14 + 1;
      FUN_03f18cc4(lVar5,**(undefined4 **)(*(long *)Newtonsoft_Json_JsonSerializer_TypeInfo + 0xb8),
                   uVar8,0);
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar7 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0238e414;
    }
  }
LAB_0238e3f8:
  puVar7 = (undefined8 *)FUN_01c72498(plVar6,*(long *)PTR_DAT_0422fce8,0);
LAB_0238e414:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


