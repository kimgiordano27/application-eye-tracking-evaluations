/*
FUNCTION_NAME: Oculus.Interaction.Grab.GrabSurfaces.BezierGrabSurface$$GenerateRaycastPlane
ENTRY_POINT: 0165c8fc
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


long Oculus_Interaction_Grab_GrabSurfaces_BezierGrabSurface__GenerateRaycastPlane(void)

{
  size_t __nbytes;
  long lVar1;
  bool bVar2;
  int __fd;
  ulong uVar3;
  ssize_t sVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = FUN_0165c844();
  if (uVar3 != 0) {
    while( true ) {
      while (uRam0000000007229fd8 <= uVar3) {
        FUN_01659d10(lRam000000000724a170);
        uVar5 = uRam0000000007229fd8;
        while (uVar5 <= uVar3) {
          uVar5 = uRam0000000007229fd8 << 1;
          uRam0000000007229fd8 = uRam0000000007229fd8 << 1;
        }
        lRam000000000724a170 = FUN_01650d08();
        uVar3 = FUN_0165c844();
        if (uVar3 == 0) {
          return 0;
        }
        if (lRam000000000724a170 == 0) {
          return 0;
        }
      }
      __fd = open("/proc/self/maps",0);
      if (__fd == -1) break;
      uVar5 = 0;
      do {
        lVar1 = lRam000000000724a170;
        uVar6 = 0;
        uVar7 = uRam0000000007229fd8 - 1;
        do {
          __nbytes = uVar7 - uVar6;
          if (uVar7 < uVar6 || __nbytes == 0) break;
          sVar4 = read(__fd,(void *)(lVar1 + uVar6),__nbytes);
          if (sVar4 < 0) goto LAB_0165ca20;
          uVar6 = sVar4 + uVar6;
        } while (sVar4 != 0);
        if ((long)uVar6 < 1) {
LAB_0165ca20:
          close(__fd);
          return 0;
        }
        uVar5 = uVar6 + uVar5;
      } while (uVar6 == uRam0000000007229fd8 - 1);
      close(__fd);
      if (uVar3 < uVar5) {
        (*pcRam0000000007229d10)
                  ("GC Warning: Unexpected asynchronous /proc/self/maps growth (to %ld bytes)\n",
                   uVar5);
      }
      lVar1 = lRam000000000724a170;
      bVar2 = uVar3 <= uVar5;
      uVar3 = uVar5;
      if ((bVar2) && (uVar5 < uRam0000000007229fd8)) {
        *(undefined1 *)(lRam000000000724a170 + uVar5) = 0;
        return lVar1;
      }
    }
  }
  return 0;
}


