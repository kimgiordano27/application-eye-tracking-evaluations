/*
FUNCTION_NAME: FUN_059f6158
ENTRY_POINT: 059f6158
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_4
*/


void FUN_059f6158(long param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_06b81011 & 1) == 0) {
    FUN_02d6084c(Firebase_AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo);
    FUN_02d6084c(Firebase_AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeInfo);
    FUN_02d6084c(
                Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo
                );
    FUN_02d6084c(Firebase_AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate_TypeInfo);
    FUN_02d6084c(Unity_VisualScripting_AttributeUtility_AttributeCache_<GetAttributes>d__12_TypeInfo
                );
    DAT_06b81011 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar10 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)Firebase_AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeInfo) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_059f6218;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02d9a5d4(param_2,*(long *)
                                   Firebase_AppUtilPINVOKE_SWIGExceptionHelper_ExceptionDelegate_TypeInfo
                          ,0);
LAB_059f6218:
    plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
    puVar3 = 
    Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo;
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)
               Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo
             ) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_059f6284;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02d9a5d4(plVar7,*(long *)
                                    Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_TypeInfo
                            ,1);
LAB_059f6284:
      puVar4 = Firebase_AppUtilPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate_TypeInfo;
      uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      lVar11 = *plVar7;
      lVar15 = *(long *)(param_1 + 0x10);
      lVar10 = *(long *)puVar3;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_059f62ec;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar10,0);
LAB_059f62ec:
      uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      }
      if ((lVar15 != 0) && (lVar10 = FUN_059f5e34(lVar15,uVar9,1,uVar5,0), lVar10 != 0)) {
        lVar15 = *plVar7;
        lVar16 = *(long *)(lVar10 + 0x28);
        lVar11 = *(long *)puVar3;
        uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar15 + (long)(*piVar14 + 2) * 0x10 + 0x138);
              goto LAB_059f63a0;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,lVar11,2);
LAB_059f63a0:
        uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        *(undefined4 *)(lVar10 + 0x10) = uVar5;
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)Firebase_AppUtilPINVOKE_SWIGStringHelper_SWIGStringDelegate_TypeInfo;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 != 0) {
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              plVar12 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *plVar12 = (long)plVar7;
              thunk_FUN_02dd37b4(plVar12,plVar7);
            }
            else {
              FUN_03aac494(lVar10,plVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar16 != 0) {
              FUN_03ec3388(lVar16,uVar8,
                           *(undefined8 *)
                            Unity_VisualScripting_AttributeUtility_AttributeCache_<GetAttributes>d__12_TypeInfo
                          );
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


