/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtility$$ReadArchetypes
ENTRY_POINT: 030cce28
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_Entities_Serialization_SerializeUtility__ReadArchetypes(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 uVar6;
  undefined1 in_stack_00000008;
  
  FUN_01ab69ac();
  FUN_01ab69ac(PTR_DAT_03cdace8);
  *(undefined1 *)(unaff_x20 + 0x72b) = 1;
  if ((*(char *)(unaff_x19 + 0x49) == '\0') && (*(long *)(unaff_x19 + 0x18) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_03cc9e10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar1 = FUN_027d75b4(unaff_x19 + 0x28,0);
    if ((uVar1 & 1) != 0) {
      FUN_020d2320(unaff_x19 + 0x50,*(undefined8 *)(unaff_x19 + 0x28),
                   *(undefined8 *)System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo);
      return 0;
    }
    plVar5 = *(long **)(unaff_x19 + 0x20);
    if (plVar5 != (long *)0x0) {
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_030ccf80;
      uVar6 = FUN_036c9fb4(*(long *)(unaff_x19 + 0x18),0);
      lVar3 = *plVar5;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              *(long *)
               System_Collections_Generic_Dictionary<FVRGrabbable,_HashSet<Collider>>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_030ccf20;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_01a472ec(plVar5,*(long *)
                                    System_Collections_Generic_Dictionary<FVRGrabbable,_HashSet<Collider>>_TypeInfo
                            ,0);
LAB_030ccf20:
      (*(code *)*puVar2)(uVar6,plVar5,puVar2[1]);
    }
    if (*(long *)(unaff_x19 + 0x18) == 0) {
LAB_030ccf80:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar1 = FUN_036c9f78(*(long *)(unaff_x19 + 0x18),0);
    if ((uVar1 & 1) == 0) {
      return 1;
    }
    in_stack_00000008 = **(undefined1 **)(*(long *)PTR_DAT_03cdace0 + 0xb8);
    FUN_020d1e1c(unaff_x19 + 0x50,&stack0x00000008,*(undefined8 *)PTR_DAT_03cdace8);
  }
  return 0;
}


