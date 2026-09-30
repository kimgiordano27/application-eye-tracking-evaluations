/*
FUNCTION_NAME: FUN_05a6ed38
ENTRY_POINT: 05a6ed38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05a6f0b0) */

void FUN_05a6ed38(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_066d3f9f & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(
                Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
                );
    FUN_02b3c81c(
                Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<SerializeField>__
                );
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(
                Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_InsertAfter<HierarchyItemButton>__
                );
    FUN_02b3c81c(Method_UnityEngine_Cubemap_Internal_Create__);
    DAT_066d3f9f = 1;
  }
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar9 = *param_3;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
         ) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05a6ee14;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02b7654c(param_3,*(long *)
                                 Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<NonSerializedAttribute>__
                        ,0);
LAB_05a6ee14:
  plVar6 = (long *)(*(code *)*puVar5)(param_3,puVar5[1]);
  puVar4 = Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<SerializeField>__;
  puVar3 = Method_UnityEngine_Cubemap_Internal_Create__;
  puVar2 = 
  Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_InsertAfter<HierarchyItemButton>__
  ;
  puVar1 = PTR_DAT_06312f90;
joined_r0x05a6ee2c:
  do {
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05a6eea0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar1,0);
LAB_05a6eea0:
    uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 != (long *)0x0) {
        FUN_05fb8d3c(*plVar6);
        return;
      }
      return;
    }
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05a6ef04;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar6,*(long *)puVar4,0);
LAB_05a6ef04:
    lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    plVar7 = (long *)thunk_FUN_02b79548(lVar9,*(undefined8 *)puVar3);
    if (plVar7 != (long *)0x0) {
      lVar10 = *plVar7;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05a6efc8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02b7654c(plVar7,lVar9,0);
LAB_05a6efc8:
      (*(code *)*puVar5)(plVar7,param_2,param_1,puVar5[1]);
      goto joined_r0x05a6ee2c;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar8 = FUN_05c89410(lVar9,0);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
          goto LAB_05a6eff0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(param_1,*(long *)puVar2,0xb);
LAB_05a6eff0:
    (*(code *)*puVar5)(param_1,uVar8,lVar9,puVar5[1]);
  } while( true );
}


